// showdown.c
#include "showdown.h"
#include "title_screen.h"
#include "main_menu.h"
#include "intro_scene.h"
#include "starter_selection.h"
#include "explore_scene.h"
#include "battle_scene.h"
#include "result_scene.h"


// Forward declarations for scene handlers (to be implemented in their files)
void title_screen_render(Canvas* canvas, ShowdownApp* app);
void title_screen_input(InputEvent* event, ShowdownApp* app);

void main_menu_render(Canvas* canvas, ShowdownApp* app);
void main_menu_input(InputEvent* event, ShowdownApp* app);

void intro_scene_render(Canvas* canvas, ShowdownApp* app);
void intro_scene_input(InputEvent* event, ShowdownApp* app);

void starter_selection_render(Canvas* canvas, ShowdownApp* app);
void starter_selection_input(InputEvent* event, ShowdownApp* app);

void explore_scene_render(Canvas* canvas, ShowdownApp* app);
void explore_scene_input(InputEvent* event, ShowdownApp* app);

void battle_scene_render(Canvas* canvas, ShowdownApp* app);
void battle_scene_input(InputEvent* event, ShowdownApp* app);

void result_scene_render(Canvas* canvas, ShowdownApp* app);
void result_scene_input(InputEvent* event, ShowdownApp* app);

// Top-level scene dispatcher
void render_scene(Canvas* canvas, ShowdownApp* app) {
    switch(app->current_scene) {
        case SCENE_TITLE:            title_screen_render(canvas, app); break;
        case SCENE_MAIN_MENU:        main_menu_render(canvas, app); break;
        case SCENE_INTRO_DIALOG:     intro_scene_render(canvas, app); break;
        case SCENE_STARTER_SELECTION:starter_selection_render(canvas, app); break;
        case SCENE_EXPLORE:          explore_scene_render(canvas, app); break;
        case SCENE_BATTLE:           battle_scene_render(canvas, app); break;
        case SCENE_RESULT:           result_scene_render(canvas, app); break;
        default: break;
    }
}

void input_scene(InputEvent* event, ShowdownApp* app) {
    switch(app->current_scene) {
        case SCENE_TITLE:            title_screen_input(event, app); break;
        case SCENE_MAIN_MENU:        main_menu_input(event, app); break;
        case SCENE_INTRO_DIALOG:     intro_scene_input(event, app); break;
        case SCENE_STARTER_SELECTION:starter_selection_input(event, app); break;
        case SCENE_EXPLORE:          explore_scene_input(event, app); break;
        case SCENE_BATTLE:           battle_scene_input(event, app); break;
        case SCENE_RESULT:           result_scene_input(event, app); break;
        default: break;
    }
}

// Flipper callback wrappers
static void showdown_render_cb(Canvas* canvas, void* ctx) {
    render_scene(canvas, (ShowdownApp*)ctx);
}

static void showdown_input_cb(InputEvent* event, void* ctx) {
    if(event->type == InputTypePress) {
        input_scene(event, (ShowdownApp*)ctx);
    }
}

// The main app entry point for Flipper Zero
int32_t showdown(void* p) {
    UNUSED(p);

    ShowdownApp app = {
        .current_scene = SCENE_TITLE,
        .menu_selection = 0,
        // Initialize more state as needed
    };

    ViewPort* vp = view_port_alloc();
    view_port_draw_callback_set(vp, showdown_render_cb, &app);

    FuriMessageQueue* q = furi_message_queue_alloc(8, sizeof(InputEvent));
    view_port_input_callback_set(vp, showdown_input_cb, &app);

    Gui* gui = furi_record_open("gui");
    gui_add_view_port(gui, vp, GuiLayerFullscreen);

    bool running = true;
    while(running) {
        InputEvent event;
        if(furi_message_queue_get(q, &event, 100) == FuriStatusOk) {
            // You can add global quit/exit handling here if needed
            if(event.key == InputKeyBack && app.current_scene == SCENE_TITLE) {
                running = false;
            }
        }
        // Optionally: persist save state, handle timers, etc.
    }

    gui_remove_view_port(gui, vp);
    view_port_free(vp);
    furi_message_queue_free(q);
    furi_record_close("gui");
    return 0;
}
