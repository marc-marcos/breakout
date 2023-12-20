#ifndef PELOTA_HH
#define PELOTA_HH

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class Pelota {
public:
  sf::Sprite sprite;
  sf::Texture texture;

  sf::Vector2f velocity;

  void move();

  Pelota();
  ~Pelota();

private:
};

#endif
