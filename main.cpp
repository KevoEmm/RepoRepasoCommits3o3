#include <iostream>
#include "Kevin.cpp"
#include "Mario.cpp"
#include "rogelio.cpp"
using namespace std;

main()
{
	/*Crear un objeto con su nombre*/
	Kevin k = Kevin("Kevin");
	mario msp = mario("Sevilla Ponce Mario", 1731114528);
	Rogelio ruvc = rogelio("Vergara Covarrubias Rogelio Uriel",1731114458);
	Victor v = Victor("Victor");
	/*Imprimir su nombre*/
	cout<<"Objeto con nombre "<<k.getNombre()<<endl;
	cout<<"Objeto con nombre "<<V.getNombre()<<endl;
	cout<<"Objeto con nombre: "<<msp.getNombre()+" Matricula :"<<msp.getMatricula()<<endl;
	//Rogelio
	cout<<"Objeto con nombre:"<<ruvc.getNombre()+" Matricula: "<<ruvc.getMatricula()<<endl;
	
}
