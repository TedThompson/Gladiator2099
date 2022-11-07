# Quake-II-Gladiator
![gladiator banner graphic](https://github.com/TedThompson/Quake-II-Gladiator/blob/6e89ffc10142f30d409bdd38b91a8091398b9ad4/media/1662930308086.jpg)
## Introduction
This is an adaptation of the "[Gladiator Bot](https://mrelusive.com/oldprojects/gladiator/gladiator.html)" originally created by Jan Paul "Mr. Elusive" van Waveren and expanded on by "[earth metal](https://github.com/earth-metal)" found [here on github](https://github.com/earth-metal/ugladq2). 

I came up with the idea for a Q2:Gladiator as a way to resolve the very unsatisfying conclusion of the original Q2 single player campaign.    

Back in the late 90's all we got at the end of Bitterman's journey was "THE END" after seeing him (yourself) crash land back on Stroggos following the Makron's demise.    

They could have continued it in Quake 4 (Q3 being it's own thing) but instead we got Matthew Kane. (?!)    

So, based loosely on the idea of an intermediate step between Q2 and Q3, and deciding the Strogg capture Bitterman following the crash, I put together a mod using many of the DM levels "earth metal" had choosen with a few of my own. 

This is stiched together a loose and vague narrative that should be instantly recognized as the era appropriate "just because" sort of motivation employed by many 90's shooters. ;)

## Playing the game
If you use a source port (I recommend Yamagi) you can use the built in "mod" menu to select "gladiator" and simply start a new game using "Game->Easy/Medium/Hard".

### Saving for later / reloading a saved game:
Progress will be saved in the form of unlocked tiers as you progress - however if you quit today and restart tomorrow you'll start back at the beginning of the last tier you were playing.

Beat the game, and you'll be set back to all tiers except the final fight unlocked so you can do what you like.

To reset your progress, drop the console and type `set sp_dm_tier 0`

## Changing levels used.
Takes 2 steps.

1. Create an *mapname*.aas file using /wbpc/wbpc.exe and put the resulting file in /gladiator/maps
2. Start the map using `map` *mapname* or to substitute it in a tier by changing the `sv_maplist` string. The string is set by `default.cfg` within `pak0.pak` so you might want to place it in your own cfg (autoexec.cfg is a good candidate).

NOTE: sv_maplist uses the singleplayer *video*.cin+*mapname* for levels preceeded by a cinematic.     
NOTE: `hub` is a special map name used for the end of each tier

These changes can be made "permanent" by adding them to a cfg file.

## Server Note - Refused Connection
To prevent other's from connecting to the single player deathmatch, `filterban` is set to 0 and only the local machine can connect. If for some reason you get a message saying you're banned, type `filterban 1` in the console and try again. This is set in `/sp_dm/hub.cfg` within `pak0.pak`, you'll need to extract it from the pak and edit it to remove these commands in line 1 and 2 if you have trouble.
