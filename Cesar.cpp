#include "Cesar.h"
#include <iostream>
using namespace std;

Cesar::Cesar(string n, int m)
	
{	
	nombre = n;	
	matricula=m;
}

Cesar::~Cesar()
{
}

string Cesar::getNombre(){	
	return nombre;
}

int Cesar::getMatricula()
{
	return matricula;	
}
