#include "Mario.h"
#include <iostream>
using namespace std;

mario::mario(string n, int m)
{
	nombre = n;
	matricula=m;
}

mario::~mario()
{
	
}

string mario::getNombre()
{
	return nombre;
}
int mario::getMatricula()
{
	return matricula;
}
