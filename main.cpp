#include <iostream>
#include "Kevin.cpp"
#include "Mario.cpp"
using namespace std;

main()
{
	/*Crear un objeto con su nombre*/
	Kevin k = Kevin("Kevin");
	mario msp = mario("Sevilla Ponce Mario", 1731114528);
	/*Imprimir su nombre*/
	cout<<"Objeto con nombre "<<k.getNombre()<<endl;
	cout<<"Objeto con nombre: "<<msp.getNombre()+" Matricula :"<<msp.getMatricula()<<endl;
	
}
