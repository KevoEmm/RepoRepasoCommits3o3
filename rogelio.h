#ifndef rogelio_h
#define rogelio_h
using namespace std;

class mario{
	private:
		string nombre;
		int matricula;
	public:
		rogelio(string, int);
		~rogelio();
		string getNombre();
		int getMatricula();
};

#endif