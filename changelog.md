# Changelog - Patch Notes [2024-05-29]

## [Unreleased]
- In progress...

## [2024-05-29]
### Added
- Created `deprecated/` folder and moved legacy or unused assets/code there for safe keeping, possible reintroduction.
- Initial commit: ported core structure from `pkmn_trader` and set up repo.

### Changed
- Updated application metadata and author list in `application.fam`.


### Removed
- [Pending] Review and move unused trading mechanisms and ESP32 Marauder files to `deprecated/`.

## [Earlier]
- See original `pkmn_trader` history for pre-fork changes.

## Version 2.3 *Please do not expect all of these features to work and or be implemented.
- Fix potential bug in copying incoming trade data to the live working struct
- Update to gblink v0.63 which includes saving/loading of pin configurations for the EXT link interface
- Add ability to reset trade state without affecting current Pokemon being configured
- Move files, consolidate files where appropriate, change scene management to be more in-line with Flipper paradigms
- Older MALVEKE style pinout no longer breaks OK button, MALVEKE users now able to modify traded Pokemon 
- Generation II support (Gold, Silver, Crystal)  
  - Ability to configure name, level, held item, moveset, EV/IV, shininess, gender, pokerus, Unown form, OT ID/name
- Custom Sprite Art for all Pokemon, all sprites are the full 56x56 px size  
- Better state synchronization during trades, able to request canceling a trade
- Exit confirmation to prevent accidentally losing configuration  
- Add main menu to select generation and pinout  
- Adjust Trade and Select views to show full sprite, with proper transparency
- Sprites moved to file on SD card  
- Create accessors for generically modifying Pokemon struct data  
