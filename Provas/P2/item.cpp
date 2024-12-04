#include "item.hpp"
#include <cmath>

// Diretório da aplicação
extern char *appDir;

// Construtor: inicializa o item com tipo e posição
Item::Item(Item::Type itemType, Vector2 spawnPosition) : type(itemType), position(spawnPosition), collected(false) {  
    // Carrega a textura do item (usando um único item Health)
    if (itemType == Type::Health) {
        texture = LoadTexture(TextFormat("%s/assets/images/item.png", appDir));
    }

    // Define o raio de colisão
    radius = texture.width / 2.0f;
}

// Destrutor: libera os recursos do item
Item::~Item() {
    UnloadTexture(texture);
}

// Desenha o item na tela (se não estiver coletado)
void Item::Draw() const {
    if (!collected) {
        DrawTexture(texture, position.x, position.y, WHITE);
    }
}

// Atualiza o estado do item (pode incluir animações ou movimentação futura)
void Item::Update(float deltaTime) {
    // Exemplo: movimento flutuante vertical (senoidal)
    position.y += sin(GetTime() * 2.0f) * 0.5f;
}

// Verifica colisão com o player
bool Item::CheckCollision(const Vector2& playerPosition, float playerRadius) const {
    // Calcula a distância entre o item e o player
    float distX = playerPosition.x - position.x;
    float distY = playerPosition.y - position.y;
    float distance = sqrt(distX * distX + distY * distY);

    // Se a distância entre os dois for menor que a soma dos raios, há colisão
    return distance < (radius + playerRadius);
}

// Retorna o tipo do item (sempre Health)
Item::Type Item::GetType() const {
    return type;
}
