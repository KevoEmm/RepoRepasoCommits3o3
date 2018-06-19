#include "Oscar.h"
#include <iostream>
using namespace std;

oscar::oscar(string n, int m)
{
	nombre = n;
	matricula=m;
}

oscar::~oscar()
{
	
}

string oscar::getNombre()
{
	return nombre;
}
int osacar::getMatricula()
{
	return matricula;
}
