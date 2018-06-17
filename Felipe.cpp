#include "Felipe.h"
#include <iostream>
using namespace std;

felipe::felipe(string n, int m)
{
	nombre = n;
	matricula=m;
}

felipe::~felipe()
{
	
}

string felipe::getNombre()
{
	return nombre;
}
int felipe::getMatricula()
{
	return matricula;
}
