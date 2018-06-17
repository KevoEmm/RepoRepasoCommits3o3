#include <iostream>
#include "Felipe.cpp"
using namespace std;

main()
{
	/*Crear un objeto con su nombre*/
	felipe 	f = felipe("Felipe Neri Soto Dimas", 1731114441);
	/*Imprimir su nombre*/
	cout<<"Objeto con nombre :"<<f.getNombre()<<endl<<endl;
	cout<<"Objeto con matricula :"<<f.getMatricula()<<endl;
}
