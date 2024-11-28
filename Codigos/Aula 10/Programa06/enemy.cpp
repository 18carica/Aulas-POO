//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: enemy.cpp -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include "enemy.hpp"
#include "C:\raylib\raylib\src\raylib.h"

// Diretório da aplicação
extern char *appDir;

// Define e inicializa o atributo estático, dentro de um escopo global
// Neste caso, não utilizamos a palavra reservada 'static'
unsigned int Enemy::enemyCount = 0;

//--------------------------------------------------------------------------------------------------------------------

// Método estático, que retorna o total de inimigos que foram instanciados
// Neste caso. não utilizamos a palavra reservada 'static'
unsigned int Enemy::getEnemyCount() {
    return enemyCount;
}

//--------------------------------------------------------------------------------------------------------------------

// Construtor: carrega a textura e define a posição inicial do inimigo
Enemy::Enemy() {

    // Incrementa o total de inimigos
    ++enemyCount;

    // Carrega a textura do inimigo
    texture = LoadTexture(TextFormat("%s/assets/images/enemy.png", appDir));

    // Posição inicial do inimigo
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(- texture.height, - texture.height - 200);

    // Define a velocidade de movimentação do inimigo
    speed = GetRandomValue(20, 140) * 1.0f;

}

//----------------------------------------------------------------------------------------------------------------------

// Destrutor: descarrega a textura player
Enemy::~Enemy() {

    // Decrementa o total de inimigos
    --enemyCount;

    // Libera os recursos utilizados pela texture do inimigo
    UnloadTexture(texture);

}

//----------------------------------------------------------------------------------------------------------------------

// Método para desenhar o inimigo na tela
void Enemy:: Draw() const {

    // Renderiza a imagem da inimigo na posição correta
    DrawTexture(texture, position.x, position.y, WHITE);

}

//----------------------------------------------------------------------------------------------------------------------

// Método para atualizar o player
void Enemy::Update(float deltaTime) {

    // Movimenta o inimigo para a baixo
    position.y += speed * deltaTime;

    // Verifica se o inimigo atingiu os limite inferior da tela
    if (position.y > GetScreenHeight()) {
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
        position.y = GetRandomValue(- texture.height, - texture.height - 200);
    }

}