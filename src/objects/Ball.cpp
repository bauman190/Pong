#include "Ball.h"
#include "raylib.h"



void ballMovement(Ball& ball)
{
    ball.pos.x += ball.ballSpeed.x * GetFrameTime();
    ball.pos.y += ball.ballSpeed.y * GetFrameTime();
}

float randBall()
{   
    int num = GetRandomValue(0, 1);

    if (num == 0) 
        return -1.0f;      
       
    else if (num == 1) 
        return 1.0f;           
}

void inItBall(Ball& ball, float x, float y) 
{
    ball.pos.x = x;
    ball.pos.y = y;
    ball.ballSpeed.x = ball.initialSpeed * randBall();
    ball.ballSpeed.y = ball.initialSpeed * randBall();
    
}

void ballSpeedLimit(Ball& ball)
{
    float maxSpeed = 1200.0f;
    if (ball.ballSpeed.x > maxSpeed)
        ball.ballSpeed.x = maxSpeed;
    if (ball.ballSpeed.x < maxSpeed * -1.0)
        ball.ballSpeed.x = maxSpeed * -1.0 ;
}