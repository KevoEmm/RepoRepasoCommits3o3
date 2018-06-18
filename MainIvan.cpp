#include <iostream>
#include "ivan.cpp"

using namespace std;

main(){
	
	ivan i = ivan("Ivan Silva Rodriguez", 1731114457);

	
	cout<<"Objeto con nombre :"<<i.getNombre()<<endl<<endl;
	
	cout<<"Objeto con matricula :"<<i.getMatricula()<<endl;
	
}
