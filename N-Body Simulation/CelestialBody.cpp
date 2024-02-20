// #include "CelestialBody.h"
#include "Universe.h"
CelestialBody::CelestialBody(double initX, double initY, double initVelX, double initVelY, double initMass, string initFile){
    x = initX;
    y = initY;
    intVelocityY = initVelY;
    intVelocityX = initVelX;
    mass = initMass;
    fileName = initFile;

	Image image;
	image.loadFromFile(fileName);
	texture1.loadFromImage(image);
	sprite1.setTexture(texture1);

}
istream& operator>> (istream& in, CelestialBody &thing) {
	in >> thing.x >> thing.y >> thing.intVelocityX >> thing.intVelocityY >> thing.mass >> thing.fileName;
	return in;
}
void CelestialBody::set(int sizeX1, int sizeY1, double uRadius){
		double tempX = (sizeX1 / 2) + ((this->x / uRadius)/2) * sizeX1;
        double tempY = (sizeY1 / 2) + ((this->y / uRadius)/2) * sizeY1;
		
        this->sprite1.setPosition(tempX, tempY);
}