#include "raylib.h"


void main() {
    const int screenWidth = 1366;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "Ray Space Shooter");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Hello World!!", 550, 300, 40, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
}