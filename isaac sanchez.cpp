#include "isaac.h"
#include <iostream>
using namespace std;

isaac::isaac(string n, int m)
{
	nombre = n;
	matricula=m;
}

isaac::~isaac()
{
	
}

string isaac::getNombre()
{
	return nombre;
}
int isaac::getMatricula()
{
	return matricula;
}
