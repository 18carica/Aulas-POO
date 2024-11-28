//----------------------------------------------------------------------------------------------------------------------
// Programa 06: programa06-1.cpp -> Jogo
//----------------------------------------------------------------------------------------------------------------------

// Comando de programa g++ programa06.cpp *.cpp -o programa06

#include "C:\raylib\raylib\src\raylib.h"
#include "player.hpp"
#include "enemy.hpp"
#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Variáveis globais
//----------------------------------------------------------------------------------------------------------------------

// Diretório da aplicação
const char *appDir = GetApplicationDirectory();

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    // Define a janela da aplicação
    InitWindow(800, 600, "Programa 06");

    // Delta time
    float deltaTime;

    // Framerate
    SetTargetFPS(60);

    // Instanciamento do player
    Player player;

    //----------------------------------------------------------------------------------------------------------------------

    // Ainda não tenho nenhum inimigo criado, mas consigo acessar essas informação
    cout << "\n >> Enemy count: " << Enemy::getEnemyCount() << "\n\n";

    // Instanciamento de um inimigo
    Enemy enemy;

    // Informa quantos inimigos foram criados
    cout << "\n >> Enemy count: " << Enemy::getEnemyCount() << "\n\n";

    //----------------------------------------------------------------------------------------------------------------------

    // Game loop
    while (!WindowShouldClose()) {

        // Retorna o tempo em segundos que o último frame levou para ser processado
        deltaTime = GetFrameTime();

        // Atualiza o player
        player.Update(deltaTime);

        // Atualiza o inimigo
        enemy.Update(deltaTime);

        // Início da renderização dos objetos do jogo
        BeginDrawing();

        // Define a cor de fundo
        ClearBackground(BLACK);

        // Renderiza o player
        player.Draw();

        // Renderiza o inimigo
        enemy.Draw();

        // Renderiza o texto com o total de inimigos
        DrawText(
            TextFormat("Enemy: %d", Enemy::getEnemyCount()),
            GetScreenWidth() - 130.0f,
            20.0f,
            22,
            WHITE
        );
        
        // Fim da renderização dos objetos do jogo
        EndDrawing();

    }

    //----------------------------------------------------------------------------------------------------------------------

    // Fecha a janela e limpa recursos do Raylib
    CloseWindow();

    return 0;

}
