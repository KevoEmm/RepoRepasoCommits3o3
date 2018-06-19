#include <iostream>
#include "Oliver.cpp"
using namespace std;

main()
{
	//Objeto
	Oliver 	O = Oliver("Rivera Cabrera Demetrio Oliver", 1731114488);
	//Imprecion
	cout<<"Nombre:"<<O.getNombre()<<endl<<endl;
	cout<<"Matricula:"<<O.getMatricula()<<endl;
}
