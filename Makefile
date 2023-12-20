CXX = g++

all: main

main: Pelota.o Bloque.o Paleta.o ConjuntoBloques.o main.o
	$(CXX) $^ -o $@ -lsfml-graphics -lsfml-window -lsfml-system

Pelota.o: Pelota.cc Pelota.hh
	$(CXX) -c $< -o $@

Bloque.o: Bloque.cc Bloque.hh  
	$(CXX) -c $< -o $@

Paleta.o: Paleta.cc Paleta.hh
	$(CXX) -c $< -o $@

ConjuntoBloques.o: ConjuntoBloques.cc ConjuntoBloques.hh
	$(CXX) -c $< -o $@

main.o: main.cpp Pelota.hh Bloque.hh Paleta.hh
	$(CXX) -c $< -o $@


clean:
	rm main *.o main
