#include "Player.h"


void moveUp(Player& player)
{
player.player.y  -= player.playerSpeed * GetFrameTime();
}

void moveDown(Player& player)
{
	player.player.y += player.playerSpeed * GetFrameTime();
}

void inItPlayer(Player& player, float x, float y) 
{
    const float playerSpeed = 500.0f;
    const float playerHeight = 150;
    const float playerWidth = 20;


    player.player.x = x;
    player.player.y = y;
    player.player.height = playerHeight;
    player.player.width = playerWidth;
    player.playerSpeed = playerSpeed;
}

