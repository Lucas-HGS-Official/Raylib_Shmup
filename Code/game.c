#include "raylib.h"
#include <time.h>
#include <stdio.h>


void main() {
    const int screenWidth = 1366;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "Ray Space Shooter");

    Texture2D playerTexture = LoadTexture("../Assets/images/player.png");
    int playerPosX = 100;
    int playerPosY = 150;

    Texture2D starTexture = LoadTexture("../Assets/images/star.png");
    SetRandomSeed(time(NULL));
    int *starListPosX = LoadRandomSequence(20, starTexture.width, screenWidth - starTexture.width);
    SetRandomSeed(time(NULL));
    int *starListPosY = LoadRandomSequence(20, starTexture.height, screenHeight - starTexture.height);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        playerPosX++;

        BeginDrawing();

            ClearBackground(BLUE);

            for(int i = 0; i < 20; i++) {
                DrawTexture(starTexture, starListPosX[i], starListPosY[i], WHITE);
            }

            DrawTexture(playerTexture, playerPosX, playerPosY, WHITE);


            DrawText("Hello World!!", 550, 300, 40, LIGHTGRAY);

        EndDrawing();
    }

    UnloadTexture(playerTexture);
    UnloadTexture(starTexture);

    UnloadRandomSequence(starListPosX);
    UnloadRandomSequence(starListPosY);

    CloseWindow();
}