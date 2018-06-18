#include "nelli.h"
#include <iostream>
using namespace std;

nelli::nelli(string n)
{
	nombre = n;
}

nelli::~nelli()
{
	
}

string nelli::getNombre()
{
	return nombre;
}
