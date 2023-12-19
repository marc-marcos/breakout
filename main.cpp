#include "Bloque.hh"
#include "Paleta.hh"
#include "Pelota.hh"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <iostream>

// Porpiedades barra

#define BAR_WIDTH 300
#define BAR_HEIGHT 20

// Framerate máximo

#define MAX_FRAMERATE 144

int main() {
  // create the window
  sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
  window.setFramerateLimit(MAX_FRAMERATE);

  // Creating the bar

  Paleta paleta = Paleta();

  // run the program as long as the window is open
  while (window.isOpen()) {
    // check all the window's events that were triggered since the last
    // iteration of the loop
    sf::Event event;
    while (window.pollEvent(event)) {
      // "close requested" event: we close the window
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // clear the window with black color
    window.clear(sf::Color::Black);

    // draw everything here...
    // window.draw(...);
    window.draw(paleta.sprite);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
      paleta.move_right();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
      paleta.move_left();
    }

    // end the current frame
    window.display();
  }

  return 0;
}
