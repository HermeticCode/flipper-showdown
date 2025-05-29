# Flipper Zero Pokémon Showdown

A work-in-progress head-to-head Pokémon battle game for Flipper Zero, forked and remixed from the pkmn_trader app.

Sprites and assets from pkmn_trader, with full credit to the original contributors. This could not be possible without this great community!

## About

Flipper Showdown brings a Pokémon-style battle system to your Flipper Zero.
Select from Gen I/II Pokémon, level up, evolve, set nicknames, stats, and moves—then battle head-to-head!

### Ultimate goal: support local or remote multiplayer battles.

## Features

- Sprite-based UI with 251 classic Pokémon

- Pokémon selection, nickname, level, and move assignment

- In-progress battle system

- Menu system based on pkmn_trader app
    - I do not intend to be unoriginal, but pkmn_trader scenes are gorgeous!!!

- Easy extension for new features and multiplayer

## Credits

### Original codebase and assets:

-EstebanFuentealba
-kbembedded
-R4g3D 
-ProteanReverie
-Darryn Cull

-Hermetic Code (current fork/maintainer)

#### See pkmn_trader README for full list
        -need to link

## Project Status

 ### 2024-05-29: Repo forked & major refactor underway.

- Deprecated trading mechanisms moved to deprecated/ for possible future use.

- New menu system, initial battle prototype in progress.

## Want to help or try it?

- Clone, build, and load to your Flipper!

## Building Requirements:

1) Flipper Zero device

2) Flipper Zero firmware with external app support (tested with RogueMaster wPlugins)
    #Support Rogue Master and check out his patreon! Sick updates all the time, and I could not have begun this project nor had any confidence for undertaking if not for RM. 

3) Python 3 (for sprite conversion scripts)

4) Standard build tools (make, gcc, etc.)

## Build instructions:

sh
Copy
Edit
git clone https://github.com/HermeticCode/flipper-showdown.git
cd flipper-showdown
## Follow Rogue Master firmware wPlugins documentation for external app building

## Roadmap
- Vet files to find what works and what doesnt
    -Very possible I have to just abandon and start fresh
    -In that event I will update and inform

- Finish full Pokémon selection/menu flow for first 251 Sprites

- Core battle engine

- Add multiplayer support (Flipper-to-Flipper or via IR/WiFi/NFC (if possible))
    - Still in process of studying IR codes/Laser Tag Application for possible IR
    implementation

- Polish UI and sprite display

- Community feedback and playtesting

- Evolution mechanic
    - Possibly integrate with flipper leveling

- 

## Changelog

- See CHANGELOG.md for full log of updates.

## License

- MIT, see LICENSE.

## You are welcome to fork, contribute, or open issues—let’s make the best Flipper Pokémon battle game ever!
