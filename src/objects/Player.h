#pragma once
#include "raylib.h"

struct Player
{
    Rectangle player;
    float playerSpeed;
};

void moveUp(Player& player);
void moveDown(Player& player);
void inItPlayer(Player& player, float x, float y);


