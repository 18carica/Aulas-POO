#ifndef ITEM_HPP
#define ITEM_HPP

#include "C:\raylib\w64devkit\x86_64-w64-mingw32\include\raylib.h"

// Classe Item
class Item {

public:
    // Tipo do item: apenas Health (recupera vida)
    enum class Type {
        Health   // Recupera vida
    };

    // Construtor: inicializa o item com tipo e posição
    Item(Item::Type itemType, Vector2 spawnPosition);

    // Destrutor: libera os recursos do item
    ~Item();

    // Método para desenhar o item na tela
    void Draw() const;

    // Atualiza o estado do item
    void Update(float deltaTime);

    // Verifica se o item foi coletado
    bool CheckCollision(const Vector2& playerPosition, float playerRadius) const;

    // Retorna o tipo do item (sempre Health)
    Type GetType() const;

private:
    Texture2D texture; // Textura do item
    Vector2 position;  // Posição do item na tela
    float radius;      // Raio do círculo de colisão
    Type type;         // Tipo do item
    bool collected;    // Indica se o item foi coletado
};

#endif // ITEM_HPP
