	#include  <iostream>
	#include <string>

	using namespace std;

class Personaje 
{
public:

	string nombre;
	int salud;
	int daño;
	int velocidad;
	int fuerza;

	void atacar();
	void bloquear();
	void recibir_daño();
};