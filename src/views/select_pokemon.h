#ifndef SELECT_POKEMON_H
#define SELECT_POKEMON_H

#pragma once

#include <gui/view.h>
#include <src/include/showdown_app.h>

void* select_pokemon_alloc(PokemonData* pdata, ViewDispatcher* view_dispatcher, uint32_t viewid);

void select_pokemon_free(ViewDispatcher* view_dispatcher, uint32_t viewid, void* select_ctx);

#endif /* SELECT_POKEMON_H */
