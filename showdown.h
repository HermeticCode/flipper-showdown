// showdown.h
#pragma once

#include <gui/gui.h>
#include <input/input.h>
#include <assets/gb_step_1.png> // Example asset, adjust as needed

#ifdef __cplusplus
extern "C" {
#endif

// All possible scenes in the app
typedef enum {
    SCENE_TITLE,
    SCENE_MAIN_MENU,
    SCENE_INTRO_DIALOG,
    SCENE_STARTER_SELECTION,
    SCENE_EXPLORE,
    SCENE_BATTLE,
    SCENE_RESULT,
} ShowdownScene;

// Global app state (expand as needed)
typedef struct {
    ShowdownScene current_scene;
    int menu_selection;
    // Add other persistent state here, like: 
    // int starter_chosen;
    // char nickname[16];
    // bool has_save;
} ShowdownApp;

// Scene handler signatures
void render_scene(Canvas* canvas, ShowdownApp* app);
void input_scene(InputEvent* event, ShowdownApp* app);

#ifdef __cplusplus
}
#endif
