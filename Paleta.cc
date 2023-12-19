#include "Paleta.hh"
#include <iostream>

#define BAR_WIDTH 300
#define BAR_HEIGHT 20

void Paleta::move_left() { sprite.move(sf::Vector2f(-5.0f, 0)); }

void Paleta::move_right() { sprite.move(sf::Vector2f(5.0f, 0)); }

Paleta::Paleta() {
  if (!texture.loadFromFile("bar.png")) {
    std::cerr << "error loading the texture...\n";
  }

  else {
    texture.setSmooth(true);

    // Creating the sprite

    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(10, 10, 10 + BAR_WIDTH, 10 + BAR_HEIGHT));

    sprite.setPosition(sf::Vector2f(400, 500));
  }
}

Paleta::~Paleta() {}
