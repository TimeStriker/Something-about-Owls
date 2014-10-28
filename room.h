#pragma once
#define ROOM
#ifdef ROOM
#include "func.h"
#include "story.h"
#include <iostream>
std::string items[50];
Room cube_1 (cube_room, items);
Object cube_ob (cube);
Room * ropoi = &cube_1;
#endif
