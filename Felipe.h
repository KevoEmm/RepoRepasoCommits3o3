#ifndef Felipe_h
#define Felipe_h
using namespace std;

class felipe{
	private:
		string nombre;
		int matricula;
	public:
		felipe(string, int);
		~felipe();
		string getNombre();
		int getMatricula();
};

#endif
