#include "Fernando.h"
#include <iostream>
using namespace std;

Fernando::Fernando(string n, int m)
{
	nombre = n;
	matricula=m;
}

Fernando::~Fernando()
{
	
}

string Fernando::getNombre()
{
	return nombre;
}
int Fernando::getMatricula()
{
	return matricula;
}
