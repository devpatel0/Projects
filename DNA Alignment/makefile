CC = g++
CFLAGS  = -Wall -Werror -pedantic --std=c++17
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
DEPS = EDistance.h main.cpp
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

all: EDistance

EDistance: EDistance.o main.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f EDistance