#pragma once
#include  <iostream>
#include <string>

using namespace std;

class Temporizador
{
public:
	float DuracionRonda;

	void IniciarRonada();
	void TerminarRonda();

private:

	float Timepotranscurrido;
};

