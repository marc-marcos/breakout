#include "Paleta.hh"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <iostream>

#define BAR_WIDTH 200
#define BAR_HEIGHT 15

#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 700

Paleta::Paleta() {
  if (!texture.loadFromFile("texture/bar.png")) {
    std::cerr << "error loading the texture...\n";
  }

  else {
    texture.setSmooth(true);

    // Creating the sprite

    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, BAR_WIDTH, BAR_HEIGHT));

    sprite.setPosition(sf::Vector2f(400, 550));
  }
}

void Paleta::move_left() {
  sf::Vector2f posicion = sprite.getPosition();

  if (posicion.x > 5.0f) {
    sprite.move(sf::Vector2f(-5.0f, 0));
  }

  else if (posicion.x > 0.0f) {
    sprite.move(sf::Vector2f(-posicion.x, 0));
  }
}

void Paleta::move_right() {
  sf::Vector2f posicion = sprite.getPosition();

  if ((posicion.x + BAR_WIDTH) < WINDOW_WIDTH - 5) {
    sprite.move(sf::Vector2f(5.0f, 0));
  }

  else if ((posicion.x + BAR_WIDTH) > WINDOW_WIDTH - 5 &&
           (posicion.x + BAR_WIDTH) < WINDOW_WIDTH) {
    sprite.move(sf::Vector2f(WINDOW_WIDTH - posicion.x, 0));
  }
}

Paleta::~Paleta() {}
