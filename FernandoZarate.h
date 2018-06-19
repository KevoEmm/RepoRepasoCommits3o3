#ifndef Fernando_h
#define Fernando_h
using namespace std;

class Fernando{
	private:
		string nombre;
		int matricula;
	public:
		Fernando(string, int);
		~Fernando();
		string getNombre();
		int getMatricula();
};

#endif
