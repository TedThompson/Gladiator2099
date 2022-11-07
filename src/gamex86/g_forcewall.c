/*
Swiped right out of Rogue source, engine has the effects
why not use them?
*/

#include "g_local.h"
#ifdef FWALL_INC
/* ================================================== */

#define FWALL_START_ON 1

void force_wall_think(edict_t* self)
{
    if (!self->wait)
    {
        gi.WriteByte(svc_temp_entity);
        gi.WriteByte(TE_FORCEWALL);
        gi.WritePosition(self->pos1);
        gi.WritePosition(self->pos2);
        gi.WriteByte(self->style);
        gi.multicast(self->offset, MULTICAST_PVS);
    }

    self->think = force_wall_think;
    self->nextthink = level.time + FRAMETIME;
}

void func_force_wall_touch(edict_t* self, edict_t* other, cplane_t* plane, csurface_t* surf)
{
    if (!other->takedamage)
        return;
    if (self->timestamp > level.time)
        return;
    self->timestamp = level.time + FRAMETIME;
    T_Damage(other, self, self, vec3_origin, other->s.origin, vec3_origin, self->dmg, 1, 0, MOD_SPLASH);
}

void force_wall_use(edict_t* self, edict_t* other /* activator */, edict_t* activator /* activator */)
{
    if (!self->wait)
    {
        self->wait = 1;
        self->think = NULL;
        self->nextthink = 0;
        self->solid = SOLID_NOT;
        self->touch = NULL;
        gi.linkentity(self);
    }
    else
    {
        self->wait = 0;
        self->think = force_wall_think;
        self->nextthink = level.time + 0.1;
        self->solid = SOLID_BSP;
        KillBox(self); /* Is this appropriate? */
        gi.linkentity(self);
    }
}

/*
 * QUAKED func_force_wall (1 0 1) ? start_on
 *
 * A vertical particle force wall. Turns on and solid when triggered.
 * If someone is in the force wall when it turns on, they're telefragged.
 *
 *  start_on - forcewall begins activated. triggering will turn it off.
 *  style - color of particles to use.
 *   208: green, 240: red, 241: blue, 224: orange
 */
void
SP_func_force_wall(edict_t* ent)
{
    ent->classname = "force_wall";

    gi.setmodel(ent, ent->model);

    ent->offset[0] = (ent->absmax[0] + ent->absmin[0]) / 2;
    ent->offset[1] = (ent->absmax[1] + ent->absmin[1]) / 2;
    ent->offset[2] = (ent->absmax[2] + ent->absmin[2]) / 2;

    ent->pos1[2] = ent->absmax[2];
    ent->pos2[2] = ent->absmax[2];

    if (ent->size[0] > ent->size[1])
    {
        ent->pos1[0] = ent->absmin[0];
        ent->pos2[0] = ent->absmax[0];
        ent->pos1[1] = ent->offset[1];
        ent->pos2[1] = ent->offset[1];
    }
    else
    {
        ent->pos1[0] = ent->offset[0];
        ent->pos2[0] = ent->offset[0];
        ent->pos1[1] = ent->absmin[1];
        ent->pos2[1] = ent->absmax[1];
    }

    if (!ent->style)
    {
        ent->style = 224;
    }

    ent->movetype = MOVETYPE_NONE;

    if (ent->spawnflags & FWALL_START_ON)
    {
        ent->solid = SOLID_BSP;
        if (ent->dmg)
            ent->touch = func_force_wall_touch;
        ent->think = force_wall_think;
        ent->nextthink = level.time + FRAMETIME;
        ent->wait = 0;
    }
    else
    {
        ent->wait = 1;
        ent->solid = SOLID_NOT;
    }

    ent->use = force_wall_use;

    ent->svflags = SVF_NOCLIENT;

    gi.linkentity(ent);
}
#endif