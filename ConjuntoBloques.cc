#include "ConjuntoBloques.hh"
#include <iostream>

#define BLOCK_HEIGHT 30
#define BLOCK_WIDTH 70 // TODO revisar esto

ConjuntoBloques::ConjuntoBloques() { lista_b = std::list<Bloque>(); }

ConjuntoBloques::~ConjuntoBloques() {}
