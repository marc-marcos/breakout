#include "Pelota.hh"
#include <SFML/Graphics.hpp>
#include <iostream>

#define BALL_RADIUS 10

Pelota::Pelota(float xPos, float yPos, std::string texturePath) {
  if (!texture.loadFromFile(texturePath)) {
    std::cerr << "error loading the texture...\n";
  }

  else {
    texture.setSmooth(true);

    // Creating the sprite

    sprite = sf::CircleShape(BALL_RADIUS);
    sprite.setTexture(&texture);

    sprite.setPosition(sf::Vector2f(xPos, yPos));
  }
}

void Pelota::move() {}

Pelota::~Pelota() {}
