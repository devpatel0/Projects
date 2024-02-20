CC = g++
CFLAGS  = -Wall -Werror -pedantic --std=c++17
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
DEPS = Triangle.h TFractal.cpp
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

all: TFractal

TFractal: Triangle.o TFractal.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f TFractal