CC = g++
CFLAGS  = -Wall -Werror -pedantic --std=c++17
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
DEPS = CelestialBody.cpp Universe.h
	
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS)  -c $<

all: NBody1

NBody1: CelestialBody.o main.o Universe.o
	$(CC) $(CFLAGS)  -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f NBody1