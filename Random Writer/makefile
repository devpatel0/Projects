CC = g++
CFLAGS  = -Wall -Werror -pedantic --std=c++17
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lboost_unit_test_framework -lboost_regex -lboost_date_time
DEPS = RandWriter.h TextWriter.cpp
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -I/usr/local/Cellar/boost/1.78.0_1/include -I/usr/local/Cellar/sfml/2.5.1_1/include -c $<

all: TextWriter

TextWriter: RandWriter.o TextWriter.o
	$(CC) $(CFLAGS) -L/usr/local/Cellar/boost/1.78.0_1/include -L/usr/local/Cellar/sfml/2.5.1_1/include -o $@ $^ $(LIBS)

clean:
	rm -f *.o
	rm -f TextWriter