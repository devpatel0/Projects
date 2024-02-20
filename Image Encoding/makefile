CC = g++
CFLAGS  = -Wall -Werror -pedantic --std=c++17
DEPS = FibLFSR.h PhotoMagic.cpp 
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

all: PhotoMagic

PhotoMagic: FibLFSR.o PhotoMagic.o
	$(CC) $(CFLAGS) -o $@ $^ -lboost_unit_test_framework -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f *.o
	rm -f PhotoMagic