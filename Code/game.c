#include "raylib.h"


void main() {
    const int screenWidth = 1366;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "Ray Space Shooter");

    Texture2D playerTexture = LoadTexture("../Assets/images/player.png");
    int playerPosX = 100;
    int playerPosY = 150;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        playerPosX++;

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawTexture(playerTexture, playerPosX, playerPosY, WHITE);

            DrawText("Hello World!!", 550, 300, 40, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
}