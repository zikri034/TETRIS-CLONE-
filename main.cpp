#include "raylib.h"

int main() {
    // Ukuran layar
    // Jika 1 blok = 30 piksel, maka grid 10x20 membutuhkan layar 300x600 piksel
    const int screenWidth = 300;
    const int screenHeight = 600;

    // Membuka jendela game
    InitWindow(screenWidth, screenHeight, "Tetris - Raylib");

    // Mengatur FPS (Frame Per Second) agar game tidak berjalan terlalu cepat
    SetTargetFPS(60);

    // Main game loop (berjalan selama jendela belum ditutup)
    while (!WindowShouldClose()) {
        
        // --- LOGIKA GAME DI SINI ---
        // (Misalnya: input keyboard untuk menggeser blok)
        if (IsKeyPressed(KEY_RIGHT)) {
            // geser ke kanan
        }

        // --- MENGGAMBAR KE LAYAR ---
        BeginDrawing();
        
        // Membersihkan layar setiap frame dengan warna latar
        ClearBackground(RAYWHITE);

        // Menggambar satu balok Tetris (Warna Merah)
        // Posisi X=120, Y=0 (di atas tengah layar), Ukuran 30x30 piksel
        DrawRectangle(120, 0, 30, 30, RED);
        
        // Menggambar garis tepi balok agar terlihat lebih jelas
        DrawRectangleLines(120, 0, 30, 30, MAROON);

        EndDrawing();
    }

    // Menutup jendela dan membersihkan memori saat keluar
    CloseWindow();

    return 0;
}