	#include  <iostream>
	#include <string>

	using namespace std;

class Personaje 
{
public:

	string nombre;
	int salud;
	int da�o;
	int velocidad;
	int fuerza;

	void atacar();
	void bloquear();
	void recibir_da�o();
};