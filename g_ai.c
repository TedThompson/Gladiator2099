// g_ai.c

#include "g_local.h"

//============================================================================

/*
=============
visible

returns 1 if the entity is visible to self, even if not infront ()
=============
*/
qboolean visible(edict_t* self, edict_t* other)
{
    gi.dprintf(">>>visible\n");
    vec3_t  spot1;
    vec3_t  spot2;
    trace_t trace;

    VectorCopy(self->s.origin, spot1);
    spot1[2] += self->viewheight;
    VectorCopy(other->s.origin, spot2);
    spot2[2] += other->viewheight;
    trace = gi.trace(spot1, vec3_origin, vec3_origin, spot2, self, MASK_OPAQUE);

    if (trace.fraction == 1.0)
        return true;
    return false;
}


/*
=============
infront

returns 1 if the entity is in front (in sight) of self
=============
*/
//qboolean infront(edict_t* self, edict_t* other)
//{
//  gi.dprintf(">>>infront\n");
//  vec3_t  vec;
//  float   dot;
//  vec3_t  forward;
//
//  AngleVectors(self->s.angles, forward, NULL, NULL);
//  VectorSubtract(other->s.origin, self->s.origin, vec);
//  VectorNormalize(vec);
//  dot = DotProduct(vec, forward);
//
//  if (dot > 0.3)
//      return true;
//  return false;
//}


//============================================================================

//void HuntTarget(edict_t* self)
//{
//  gi.dprintf(">>>HuntTarget\n");
//  vec3_t  vec;
//
//  self->goalentity = self->enemy;
//  if (self->monsterinfo.aiflags & AI_STAND_GROUND)
//      self->monsterinfo.stand(self);
//  else
//      self->monsterinfo.run(self);
//  VectorSubtract(self->enemy->s.origin, self->s.origin, vec);
//  self->ideal_yaw = vectoyaw(vec);
//  // wait a while before first attack
//  if (!(self->monsterinfo.aiflags & AI_STAND_GROUND))
//      AttackFinished(self, 1);
//}

//void FoundTarget(edict_t* self)
//{
//  // let other monsters see this monster for a while
//  gi.dprintf(">>>FoundTarget\n");
//  if (self->enemy->client)
//  {
//      level.sight_entity = self;
//      level.sight_entity_framenum = level.framenum;
//      level.sight_entity->light_level = 128;
//  }
//
//  self->show_hostile = level.time + 1;        // wake up other monsters
//
//  VectorCopy(self->enemy->s.origin, self->monsterinfo.last_sighting);
//  self->monsterinfo.trail_time = level.time;
//
//  if (!self->combattarget)
//  {
//      HuntTarget(self);
//      return;
//  }
//
//  self->goalentity = self->movetarget = G_PickTarget(self->combattarget);
//  if (!self->movetarget)
//  {
//      self->goalentity = self->movetarget = self->enemy;
//      HuntTarget(self);
//      gi.dprintf("%s at %s, combattarget %s not found\n", self->classname, vtos(self->s.origin), self->combattarget);
//      return;
//  }
//
//  // clear out our combattarget, these are a one shot deal
//  self->combattarget = NULL;
//  self->monsterinfo.aiflags |= AI_COMBAT_POINT;
//
//  // clear the targetname, that point is ours!
//  self->movetarget->targetname = NULL;
//  self->monsterinfo.pausetime = 0;
//
//  // run for it
//  self->monsterinfo.run(self);
//}

/*
============
FacingIdeal

============
*/
//qboolean FacingIdeal(edict_t* self)
//{
//  gi.dprintf(">>>FacingIdea\n");
//  float   delta;
//
//  delta = anglemod(self->s.angles[YAW] - self->ideal_yaw);
//  if (delta > 45 && delta < 315)
//      return false;
//  return true;
//}

//=============================================================================