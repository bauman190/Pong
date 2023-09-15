#pragma once
#include "raylib.h"

struct Ball
{
    Vector2 pos;
    Vector2 ballSpeed;
    float radius = 10;
    float initialSpeed = 150.0f;
    bool goingUp; 
    bool goingDown;
};

void ballMovement(Ball& ball);

void inItBall(Ball& ball, float x, float y);

float randBall();

void ballSpeedLimit(Ball& ball);