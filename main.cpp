#include "Bloque.hh"
#include "ConjuntoBloques.hh"
#include "Paleta.hh"
#include "Pelota.hh"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <cstdlib>
#include <ctime>
#include <iostream>

// Vector de texturas posibles

std::vector<std::string> texturas = {"texture/blue.png", "texture/orange.png",
                                     "texture/pink.png", "texture/purple.png",
                                     "texture/red.png",  "texture/yellow.png"};

// Propiedades barra

#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 700

// Propiedades bloques

#define BLOCK_HEIGHT 30
#define BLOCK_WIDTH 70 // TODO revisar esto

// Framerate máximo

#define MAX_FRAMERATE 144

int main() {
  // create the window
  sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
                          "My window");
  window.setFramerateLimit(MAX_FRAMERATE);

  // Random stuff
  std::srand(std::time(0));

  // Creating the bar

  Paleta paleta = Paleta();

  // Crear un bloque para ver que tal
  ConjuntoBloques cb = ConjuntoBloques();

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 3; ++j) {
      int randomTexture = std::rand() % 6;
      cb.lista_b.push_back(
          Bloque(i * 70, j * BLOCK_HEIGHT, texturas[randomTexture]));
    }
  }

  cb.lista_b.push_back(Bloque(3 * 70, 6 * BLOCK_HEIGHT, "texture/purple.png"));

  // Crear la Pelota

  Pelota ball = Pelota(100.0f, 100.0f, "texture/red.png");

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

    window.draw(ball.sprite);

    for (Bloque b : cb.lista_b) {
      window.draw(b.sprite);
    }

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
