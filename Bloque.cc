#include "Bloque.hh"
#include <iostream>

#define BLOCK_HEIGHT 30
#define BLOCK_WIDTH 70 // TODO revisar esto

Bloque::Bloque(float xPos, float yPos, std::string texturePath) {
  if (!texture.loadFromFile(texturePath)) {
    std::cerr << "error loading the texture...\n";
  }

  else {
    texture.setSmooth(true);

    // Creating the sprite

    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(xPos, yPos, BLOCK_WIDTH, BLOCK_HEIGHT));

    sprite.setPosition(sf::Vector2f(xPos, yPos));
  }
}

Bloque::~Bloque() {}

bool check_collision(Pelota pelota) {}
