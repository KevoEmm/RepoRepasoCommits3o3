#ifndef Oliver_h
#define Oliver_h
using namespace std;

class Oliver{
	private:
		string nombre;
		int matricula;
	public:
		Oliver(string, int);
		~Oliver();
		string getNombre();
		int getMatricula();
};

#endif
