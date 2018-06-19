#include "rogelio.h"
#include <iostream>
using namespace std;

mario::mario(string n, int m)
{
	nombre = n;
	matricula=m;
}

rogelio::~rogelio()
{
	
}

string rogelio::getNombre()
{
	return nombre;
}
int rogelio::getMatricula()
{
	return matricula;
}