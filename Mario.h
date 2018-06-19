#ifndef mario_h
#define mario_h
using namespace std;

class mario{
	private:
		string nombre;
		int matricula;
	public:
		mario(string, int);
		~mario();
		string getNombre();
		int getMatricula();
};

#endif
