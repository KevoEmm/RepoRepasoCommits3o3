#include "Ivan.h"
#include <iostream>
using namespace std;

ivan::ivan(string n, int m)
	
{	
	nombre = n;	
	matricula=m;
}

ivan::~ivan()
{
}

string ivan::getNombre(){	
	return nombre;
}

int ivan::getMatricula()
{
	return matricula;	
}
