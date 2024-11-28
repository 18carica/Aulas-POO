//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: enemy.hpp -> Interface
//----------------------------------------------------------------------------------------------------------------------

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "C:\raylib\raylib\src\raylib.h"

// Definição da classe Enemy
class Enemy {

    public:

    // Construtor: carrega a textura e define a posição inicial do inimigo
    Enemy();

    // Destrutor: descarrega a textura do inimigo
    ~Enemy();

    // Métodos para desenhar 0 inimigo na tela
    void Draw() const;

    // Métodos para atualizar o inimigo na tela
    void Update(float deltaTime);

    // Método estático, utilizando para obter o total de instâncias do inimigo
    static unsigned int getEnemyCount();

    private:

        Texture2D texture; // Textura do inimigo
        Vector2 position;  // Posição odo inimigo na tela
        float speed;       // Velocidade de movimentação do inimigo

        // Atributo estático, utilizando para obter o total de instâncias do inimigo
        static unsigned int enemyCount;


};

#endif