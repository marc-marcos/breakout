#include <SFML/Graphics.hpp>

class Paleta {
public:
  sf::Sprite sprite;
  sf::Texture texture;

  void move_right();
  void move_left();

  Paleta();
  ~Paleta();

private:
};
