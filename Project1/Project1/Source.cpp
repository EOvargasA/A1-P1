#include <iostream>
#include <string>

class Punto
{
public:
	Punto(int x, int y, int z);
	Punto(int x, int y);
	Punto(int x);
	Punto();
	int getX();
	int getY();
	int getZ();
	std::string getDim();
	void setX(int x);
	void setY(int y);
	void setZ(int z);
	void setDim(std::string dim);
private:
	int x;
	int y;
	int z;
	std::string dim;
};

Punto::Punto(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->dim = "Tridimensional";
}
Punto::Punto(int x, int y)
{
	this->x = x;
	this->y = y;
	this->z = NULL;
	this->dim = "Bidimensional";
}
Punto::Punto(int x) 
{
	this->x = x;
	this->y = NULL;
	this->z = NULL;
	this->dim = "Unidimensional";
}
Punto::Punto() 
{
	this->x = NULL;
	this->y = NULL;
	this->z = NULL;
	this->dim = "Sin dimensiones";
}
int Punto::getX() 
{
	return this->x;
}
int Punto::getY() 
{
	return this->y;
}
int Punto::getZ()
{
	return this->z;
}
std::string Punto::getDim() 
{
	return this->dim;
}
void Punto::setX(int x)
{
	this-> x = x;
}
void Punto::setY(int y)
{
	this->y = y;
}
void Punto::setZ(int z)
{
	this->z = z;
}
void Punto::setDim(std::string dim)
{
	this->dim = dim;
}
int main()
{
	std::cout << "Hello, world!\n";
}