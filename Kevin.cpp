#include "Kevin.h"
#include <iostream>
using namespace std;

Kevin::Kevin(string n)
{
	nombre = n;
}

Kevin::~Kevin()
{
	
}

string Kevin::getNombre()
{
	return nombre;
}
