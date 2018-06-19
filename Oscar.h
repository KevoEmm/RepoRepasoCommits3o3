#ifndef Oscar_h
#define Oscar_h
using namespace std;

class oscar{
	private:
		string nombre;
		int matricula;
	public:
		oscar(string, int);
		~oscar();
		string getNombre();
		int getMatricula();
};

#endif
