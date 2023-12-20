#ifndef CONJUNTO_BLOQUES_HH
#define CONJUNTO_BLOQUES_HH

#include "Bloque.hh"
#include <list>

class ConjuntoBloques {
public:
  std::list<Bloque> lista_b;

  ConjuntoBloques();
  ~ConjuntoBloques();

private:
};

#endif
