#pragma once
#include"raylib.h"

struct Wall
{
    Rectangle wall;
};

void inItWall(Wall& wall, float x, float y, float width, float height);