//title_screen.c
#include "title_screen.h"
#include "showdown.h"
#include "gui/gui.h"
#include "input/input.h"
#include "assets/gb_step_1.png"

void title_screen_render(Canvas* canvas, ShowdownApp* app) {
    // Clear the canvas
    canvas_clear(canvas);

    // Draw the title screen background
    canvas_draw_image(canvas, "assets/gb_step_1.png", 128, 64);

    // Draw the title text
    canvas_draw_text(canvas, "Flipper Showdown", 50, 20, FONT_LARGE, COLOR_BLACK);

    // Draw the start button
    canvas_draw_text(canvas, "Press Start", 50, 100, FONT_MEDIUM, COLOR_BLACK);
}

void title_screen_input(InputEvent* event, ShowdownApp* app) {
    // Handle input events for the title screen
    if (event->type == INPUT_EVENT_PRESS) {
        if (event->key == KEY_START) {
            // Transition to the main menu scene
            app->current_scene = SCENE_MAIN_MENU;
        }
    }
}