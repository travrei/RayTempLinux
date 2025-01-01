#include <raylib.h>

int main()
{
    //Inicar
    InitWindow(600, 400, "Janela Foda!");

    //Rodar
    while (!WindowShouldClose()) {
        BeginDrawing();
        //Aqui começa o desenho

        ClearBackground(SKYBLUE);

        EndDrawing();
    }

    //Fechar
    CloseWindow();

    return 0;
}
