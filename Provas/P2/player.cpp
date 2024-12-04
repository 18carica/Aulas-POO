//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: player.cpp -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include "player.hpp"

// Diretório da aplicação
extern char *appDir;

//----------------------------------------------------------------------------------------------------------------------

// Construtor: carrega a textura e define a posição inicial do player
Player::Player() {

    // Carrega a textura do player
    texture = LoadTexture(TextFormat("%s/assets/images/player.png", appDir));

    // Posição inicial do jogador
    position.x = (GetScreenWidth() - texture.width) / 2.0f;
    position.y = (GetScreenHeight() - texture.height - 10.0f);

    // Define a velocidade de movimentação do player
    speed = 150.0f;

    // Define o raio do círculo de colisão do player
    radius = 52.0f;

    // Define a saúde inicial do player
    health = 100;

    // Inicializa a pontuação do player
    score = 0;
}

//----------------------------------------------------------------------------------------------------------------------

// Destrutor: descarrega a textura player
Player::~Player() {
    // Libera os recursos utilizados pela texture do player
    UnloadTexture(texture);
}

//----------------------------------------------------------------------------------------------------------------------

// Método para desenhar o player na tela
void Player::Draw() const {

    // Renderiza a imagem do player na posição correta
    DrawTexture(texture, position.x, position.y, RAYWHITE);

    // Renderiza o círculo de colisão do player (para debug)
    /*
    DrawCircle(
        position.x + texture.width / 2.0f, 
        position.y + texture.height / 2.0f,
        radius,
        {255, 0, 0, 100}
    );
    */
}

//----------------------------------------------------------------------------------------------------------------------

// Método para atualizar o player
void Player::Update(float deltaTime) {

    // Movimenta o player para a direita
    if (IsKeyDown(KEY_RIGHT)) {
        position.x += speed * deltaTime;
    }

    // Movimenta o player para a esquerda
    if (IsKeyDown(KEY_LEFT)) {
        position.x -= speed * deltaTime;
    }

    // Movimenta o player para cima
    if (IsKeyDown(KEY_UP)) {
        position.y -= speed * deltaTime;
    }

    // Movimenta o player para baixo
    if (IsKeyDown(KEY_DOWN)) {
        position.y += speed * deltaTime;
    }

    // Verifica se o player atingiu os limites da tela
    CheckScreenLimits();
}

//----------------------------------------------------------------------------------------------------------------------

// Método que verifica se o player colidiu com as bordas da tela
void Player::CheckScreenLimits() {
    if (position.x <= 0) {
        position.x = 0;
    }

    if (position.x + texture.width >= GetScreenWidth()) {
        position.x = GetScreenWidth() - texture.width;
    }

    if (position.y <= 0) {
        position.y = 0;
    }

    if (position.y + texture.height >= GetScreenHeight()) {
        position.y = GetScreenHeight() - texture.height;
    }
}

//----------------------------------------------------------------------------------------------------------------------

// Método que retorna a posição do player
Vector2 Player::GetPosition() const {
    return position;
}

//----------------------------------------------------------------------------------------------------------------------

// Método que retorna o raio do círculo de colisão do player
float Player::GetRadius() const {
    return radius;
}

//----------------------------------------------------------------------------------------------------------------------

// Método para diminuir a saúde do player quando ele receber algum dano
void Player::TakeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

//----------------------------------------------------------------------------------------------------------------------

// Método para retornar a saúde do player
int Player::GetHealth() const {
    return health;
}

//----------------------------------------------------------------------------------------------------------------------

// Método para adicionar pontuação ao player
void Player::AddScore(int points) {
    score += points;
}

//----------------------------------------------------------------------------------------------------------------------

// Método para retornar a pontuação do player
int Player::GetScore() const {
    return score;
}
