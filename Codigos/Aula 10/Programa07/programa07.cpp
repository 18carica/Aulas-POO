//----------------------------------------------------------------------------------------------------------------------
// Programa 07: programa07.cpp -> Jogo
//----------------------------------------------------------------------------------------------------------------------

// Comando de programa g++ programa07.cpp *.cpp -o programa07

#include "C:\raylib\w64devkit\x86_64-w64-mingw32\include\raylib.h"
#include "player.hpp"
#include "enemy.hpp"
#include <algorithm>
#include <vector>
#include <memory> // unique_ptr

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
    InitWindow(800, 600, "Programa 07");

    // Inicializa o dispositivo de áudio
    InitAudioDevice();

    // Delta time
    float deltaTime;

    // Framerate
    SetTargetFPS(60);

    // Instanciamento do player
    Player player;

    //----------------------------------------------------------------------------------------------------------------------

    // Vetor para armazenar os inimigos como ponteiros exclusivos
    vector <unique_ptr<Enemy>> enemies;

    // Loop para Instanciamento dos inimigos
    // Utiliza o construtor padrão
    for (int i = 0; i < 10; i++) {
        enemies.emplace_back(unique_ptr<Enemy>(new Enemy()));
    }

    //----------------------------------------------------------------------------------------------------------------------

    // Carrega a música de fundo
    Music music = LoadMusicStream(TextFormat("%s/assets/music/music.ogg", appDir));

    // Toca a música em loop
    PlayMusicStream(music);

    //----------------------------------------------------------------------------------------------------------------------

    // Game loop
    while (!WindowShouldClose()) {

        // Atualiza o stream da música
        UpdateMusicStream(music);

        // Retorna o tempo em segundos que o último frame levou para ser processado
        deltaTime = GetFrameTime();

        // Atualiza o player
        player.Update(deltaTime);

        // Atualização da posição de todos os inimigos
        for (auto& enemy : enemies) {
            enemy->Update(deltaTime);
        }

        // Remove os inimigos que colidiram com o player
        enemies.erase(
            remove_if(enemies.begin(), enemies.end(),
                [&](const unique_ptr<Enemy>& enemy) {

                    // Se houve colisão com o player
                    if (enemy->CheckCollision(player)) {

                        // Atribui o dano (10%)
                        player.TakeDamage(10);

                        // Marca o inimigo para remição
                        return true;
                    }

                    // Mantém o inimigo
                    return false;
                }),
            
            enemies.end()
        );

        // Remove os inimigos que Ultrapassaram o limite inferior da tela
        /*
        enemies.erase(
            remove_if(enemies.begin(), enemies.end(),
                [](const unique_ptr<Enemy>& enemy) {
                    // Condição para remover
                    return enemy->IsOffScreen();
                }),
            enemies.end()
        );
        */

       // Início da renderização dos objetos do jogo
        BeginDrawing();

        // Define a cor de fundo
        ClearBackground(BLACK);

        // Renderiza o player
        player.Draw();

        // Renderiza todos os inimigos
        for (const auto& enemy : enemies) {
            enemy->Draw();
        }

        // Renderiza o texto com o total de inimigos
        DrawText(
            TextFormat("Enemy: %d", Enemy::getEnemyCount()),
            GetScreenWidth() - 130.0f,
            20.0f,
            22,
            WHITE
        );

        // Renderiza o texto com a saúde do player
        DrawText(
            TextFormat("Grogu: %d %%", 100 * player.GetHealth() / 100),
            GetScreenWidth() - 150.0f,
            50.0f,
            22,
            WHITE
        );
        
        // Fim da renderização dos objetos do jogo
        EndDrawing();

    }

    //----------------------------------------------------------------------------------------------------------------------

    // Libera a memória utilizada pela música de fundo
    UnloadMusicStream(music);

    // Fecha o dispositivo de áudio
    CloseAudioDevice();

    // Fecha a janela e limpa recursos do Raylib
    CloseWindow();

    return 0;

}
