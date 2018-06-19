#include <iostream>
#include "SaOs.cpp"
using namespace std;

main()
{
	//Objeto
	Oliver 	O = Brandon("Sanchez Osthoa Brandon Leandro", 1731114538);
	//Imprecion
	cout<<"Nombre:"<<O.getNombre()<<endl<<endl;
	cout<<"Matricula:"<<O.getMatricula()<<endl;
}
