#ifndef Ivan_h
#define ivan_h

using namespace std;

class ivan{
private:
	string nombre;
	int matricula;
public:
	ivan(string, int);
	
	~ivan();
	
	string getNombre();
	
	int getMatricula();
};
#endif
