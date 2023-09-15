#include "Wall.h"

void inItWall(Wall& wall, float x, float y, float width, float height) 
{
	wall.wall.x = x;
	wall.wall.y = y;
	wall.wall.width = width;
	wall.wall.height = height;
}