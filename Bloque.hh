#ifndef BLOQUE_HH
#define BLOQUE_HH

#include "Pelota.hh"
#include <SFML/Graphics.hpp>

class Bloque {
public:
  sf::Sprite sprite;
  sf::Texture texture;

  Bloque(float xPos, float yPos, std::string texturePath);
  ~Bloque();

  bool check_collision(Pelota pelota);

private:
};

#endif
