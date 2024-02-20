CC = g++
CFLAGS  = -Wall -Werror -pedantic --std=c++17
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
DEPS = CircularBuffer.h StringSound.cpp

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

all: CircularBuffer

KSGuitarSim: CircularBuffer.o StringSound.o KSGuitar.o test.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f KSGuitarSim