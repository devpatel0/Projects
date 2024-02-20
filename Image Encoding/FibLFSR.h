//Dev Patel
//Comp 4
//PS1b


#include<string>
#include<iostream>
#include<cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <bitset>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
class FibLFSR {
public:
    FibLFSR();
    FibLFSR(string seed) : seed1(seed) {}
    string getSeed(void)const {
        return seed1;
    }
    int step();

    int generate(int k);
    
private:
    string seed1;
};
