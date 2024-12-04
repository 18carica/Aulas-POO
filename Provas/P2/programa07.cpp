//----------------------------------------------------------------------------------------------------------------------
// Prova P2: programa07.cpp -> Jogo
// Considere o exemplo para o Programa07, desenvolvido durante as atividades da aula sobre escopo e relacionamento de classes. Nele, além do programa principal (programa07.cpp), criamos uma classe para gerenciar um jogador (player.hpp e player.cpp) e uma classe para gerenciar os inimigos (enemy.hpp e enemy.cpp). Considerando essas informações, altere o programa que foi desenvolvido, adicionando uma classe para gerenciar items que o jogador possa coletar. Modifique o programa principal, instanciando alguns items. O item deve ser destruído após ser coletado e uma pontuação deve ser atribuída ao jogador. Essa pontuação deve ser exibida no jogo. Crie um repositório no GitHub e adicione todo o código relacionado ao program. No Google Classroom, informe o link para acesso e esse repositório. Boa Sorte!
//----------------------------------------------------------------------------------------------------------------------

// Comando de programa g++ programa07.cpp *.cpp -o programa07

#include "C:\raylib\w64devkit\x86_64-w64-mingw32\include\raylib.h"
#include "player.hpp"
#include "enemy.hpp"
#include "item.hpp" // Inclusão da nova classe Item
#include <algorithm>
#include <vector>
#include <memory> // unique_ptr

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
// Variáveis globais
//----------------------------------------------------------------------------------------------------------------------

const char *appDir = GetApplicationDirectory();

//----------------------------------------------------------------------------------------------------------------------
// Função principal
//----------------------------------------------------------------------------------------------------------------------
int main() {

    // Define a janela da aplicação
    InitWindow(800, 600, "Programa 07");

    // Inicializa o dispositivo de áudio
    InitAudioDevice();

    float deltaTime;
    SetTargetFPS(60);

    // Instancemanto do player
    Player player;

    // Vetor para armazenar os inimigos
    vector<unique_ptr<Enemy>> enemies;
    for (int i = 0; i < 10; i++) {
        enemies.emplace_back(make_unique<Enemy>());
    }

    // Vetor para armazenar os itens
    vector<unique_ptr<Item>> items;
    for (int i = 0; i < 5; i++) {
        items.emplace_back(make_unique<Item>(Item::Type::Health, Vector2{ 100.0f * i, 100.0f }));
    }

    // Carrega a música de fundo
    Music music = LoadMusicStream(TextFormat("%s/assets/music/music.mp3", appDir));
    PlayMusicStream(music);

    // Game loop
    while (!WindowShouldClose()) {

        UpdateMusicStream(music);
        deltaTime = GetFrameTime();

        player.Update(deltaTime);

        for (auto &enemy : enemies) {
            enemy->Update(deltaTime);
        }

        for (auto &item : items) {
            item->Update(deltaTime);
        }

        // Verifica colisões entre o player e os itens
        items.erase(
            remove_if(items.begin(), items.end(),
                      [&](const unique_ptr<Item> &item) {
                          if (item->CheckCollision(player.GetPosition(), player.GetRadius())) {
                              player.AddScore(10);  // Exemplo de como atualizar o score
                              return true;
                          }
                          return false;
                      }),
            items.end());

        enemies.erase(
            remove_if(enemies.begin(), enemies.end(),
                      [&](const unique_ptr<Enemy> &enemy) {
                          if (enemy->CheckCollision(player)) {
                              player.TakeDamage(10);
                              return true;
                          }
                          return false;
                      }),
            enemies.end());

        BeginDrawing();
        ClearBackground(BLACK);

        player.Draw();

        for (const auto &enemy : enemies) {
            enemy->Draw();
        }

        for (const auto &item : items) {
            item->Draw();
        }

        DrawText(TextFormat("Enemies: %d", Enemy::getEnemyCount()), GetScreenWidth() - 130.0f, 20.0f, 22, WHITE);
        DrawText(TextFormat("Health: %d %%", player.GetHealth()), GetScreenWidth() - 150.0f, 50.0f, 22, WHITE);
        DrawText(TextFormat("Score: %d", player.GetScore()), GetScreenWidth() - 110.0f, 75.0f, 22, WHITE);

        EndDrawing();
    }

    UnloadMusicStream(music);
    CloseAudioDevice();
    CloseWindow();

    return 0;
}

