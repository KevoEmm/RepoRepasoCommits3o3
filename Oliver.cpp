#include "Oliver.h"
#include <iostream>
using namespace std;

Oliver::Oliver(string n, int m)
{
	nombre = n;
	matricula=m;
}

Oliver::~Oliver()
{
	
}

string Oliver::getNombre()
{
	return nombre;
}
int Oliver::getMatricula()
{
	return matricula;
}
