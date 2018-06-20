#ifndef Cesar_h
#define Cesar_h

using namespace std;

class Cesar{
private:
	string nombre;
	int matricula;
public:
	Cesar(string, int);
	
	~Cesar();
	
	string getNombre();
	
	int getMatricula();
};
#endif
