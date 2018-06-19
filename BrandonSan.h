#ifndef Brandon_h
#define Brandon_h
using namespace std;

class Brandon{
	private:
		string nombre;
		int matricula;
	public:
		Brandon(string, int);
		~Brandon();
		string getNombre();
		int getMatricula();
};

#endif
