#include <iostream>
#include "Kevin.cpp"
using namespace std;

main()
{
	/*Crear un objeto con su nombre*/
	Kevin k = Kevin("Kevin");
	/*Imprimir su nombre*/
	cout<<"Objeto con nombre "<<k.getNombre()<<endl;
}
