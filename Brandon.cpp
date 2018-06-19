#include "Oliver.h"
#include <iostream>
using namespace std;

Brandon::Brandon(string n, int m)
{
	nombre = n;
	matricula=m;
}

Brandon::~Brandon()
{
	
}

string Brandon::getNombre()
{
	return nombre;
}
int Brandon::getMatricula()
{
	return matricula;
}
