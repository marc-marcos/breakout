#ifndef PELOTA_HH
#define PELOTA_HH

#include <SFML/Graphics.hpp>

class Pelota {
public:
  sf::Vector2f velocidad;
  sf::CircleShape sprite;
  sf::Texture texture;

  Pelota(float xPos, float yPos, std::string texturePath);
  ~Pelota();

  void move();

private:
};

#endif
