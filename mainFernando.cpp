#include <iostream>
#include "Fernando.cpp"
using namespace std;

main()
{
	/*Crear un objeto con su nombre*/
	felipe 	f = felipe("Zarate Mendoza Fernando", 1731114992);
	/*Imprimir su nombre*/
	cout<<"Objeto con nombre :"<<f.getNombre()<<endl<<endl;
	cout<<"Objeto con matricula :"<<f.getMatricula()<<endl;
}
