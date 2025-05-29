Flipper Zero Pokémon Showdown
A work-in-progress head-to-head Pokémon battle game for Flipper Zero, forked and remixed from the pkmn_trader app.

Sprites and assets from pkmn_trader, with full credit to the original contributors.

About
Flipper Showdown brings a Pokémon-style battle system to your Flipper Zero.
Select from 251 Pokémon, set nicknames, stats, and moves—then battle head-to-head!
Ultimate goal: support local or remote multiplayer battles.

Features
Sprite-based UI with 251 classic Pokémon

Pokémon selection, nickname, level, and move assignment

In-progress battle system

Menu system based on pkmn_trader app

Easy extension for new features and multiplayer

Credits
Original codebase and assets:

EstebanFuentealba

kbembedded, R4g3D, ProteanReverie, Darryn Cull

RizWitDaTizm (current fork/maintainer)

See pkmn_trader README for full list

Project Status
2024-05-29: Repo forked & major refactor underway.

Deprecated trading mechanisms moved to deprecated/ for possible future use.

New menu system, initial battle prototype in progress.

Want to help or try it?
Clone, build, and load to your Flipper!

Building
Requirements:

Flipper Zero device

Flipper Zero firmware with external app support (tested with RogueMaster wPlugins)

Python 3 (for sprite conversion scripts)

Standard build tools (make, gcc, etc.)

Build instructions:

sh
Copy
Edit
git clone https://github.com/HermeticCode/flipper-showdown.git
cd flipper-showdown
# Follow firmware's documentation for external app building
For detailed steps, see docs/BUILDING.md (coming soon).

Roadmap
 Finish full Pokémon selection/menu flow

 Core battle engine MVP

 Add multiplayer support (Flipper-to-Flipper or via WiFi/NFC if possible)

 Polish UI and sprite display

 Community feedback and playtesting

Changelog
See CHANGELOG.md for full log of updates.

License
MIT, see LICENSE.

You are welcome to fork, contribute, or open issues—let’s make the best Flipper Pokémon battle game ever!
