Title:         Quake 2: Gladiator game source code
Version:       version 1.0
Date:          11-7-2022
Author:        T. Thompson, Mr. Elusive
Email:         info@federalproductions.com

Description
-----------

    This product incorporates source code from the Gladiator bot.
    The Gladiator bot is available at the Gladiator Bot page
    https://mrelusive.com/oldprojects/gladiator/gladiator.html.

    This program is in NO way supported by MrElusive.

    This program may NOT be sold in ANY form whatsoever. If you have paid
    for this product, you should contact MrElusive immediately via the
    Gladiator bot page or at MrElusive@botepidemic.com
    
    (Mr. Elusive is no longer with us, RIP 
    https://twitter.com/ID_AA_Carmack/status/826531007381794817)

This archive includes the game source code used for the Gladiator Bot.
This source code incorporates the following parts:

1. The Quake2 v3.20 game source code by id Software.
   ftp.idsoftware.com/idstuff/quake2/source/
2. The Gladiator Bot game source code by MrElusive.
3. Single Player Deathmatch game source code by earth-metal.
4. Quake2: Gladiator game source code by T. Thompson

The source code of the Gladiator Bot DLL is NOT included!


Source code notes
-----------------

First and foremost, the source here is not _quite_ the same as the DLL in the
release. Due to an unfortunate data loss, the very final final tweaks 
(implimenting damage modifiers {Easy 0.5 dmg, Medium 1.0 dmg, hard 1.2 dmg, 
hard+ 0.5 maxhealth} and a few minor tweaks) are not reflected in the 
uncompiled code. Sorry, but I'm not going to wade back in just to try and 
remember minor changes made over the course of a month. 

The source file g_local.h includes several defines at the top. These defines
have been used in combination with conditional compilation to mark the
different parts of the source code added to the Quake2 v3.20 game source code.


Copyright and distribution permissions (from the original author)
-----------------------------------------------------------------

By using this source code you agree to exempt, without reservation,
the authors and owners of this production or components thereof
from any responsibility for liability, damage caused, or loss,
directly or indirectly, by this software, including but not limited
to, any interruptions of service, loss of business, or any other
consequential damages resulting from the use of or operation of
this source code or components thereof. No warranties are made, expressed
or implied, regarding the usage, functionality, or implied operability
of this source code. All elements are available solely on an "as-is"
basis. Usage is subject to the user's own risk.

id Software does not distribute, nor support this source code.

The Gladiator Bot game source code may NOT be sold or used in
commercial products in ANY form.

Please read the included liscense.txt for the copyright information
regarding those files belonging to Id Software, Inc.

Should you decide to release a modified version of the
Gladiator Bot game source code or parts of it, in source
code or compiled form, you MUST add the following text to the
documentation included with your product.

    This product incorporates source code from the Gladiator bot.
    The Gladiator bot is available at the Gladiator Bot page
    https://mrelusive.com/oldprojects/gladiator/gladiator.html.

    This program is in NO way supported by MrElusive.

    This program may NOT be sold in ANY form whatsoever. If you have paid
    for this product, you should contact MrElusive immediately via the
    Gladiator bot page or at MrElusive@botepidemic.com
    
    (Mr. Elusive is no longer with us, RIP 
    https://twitter.com/ID_AA_Carmack/status/826531007381794817)

Version Changes
---------------

n/a
