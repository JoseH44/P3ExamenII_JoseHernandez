#include "Operador.h"

Operador::Operador(char pSigno):Object()
{
	signo = pSigno;
}

char Operador::getSigno(){
	return signo;
}

Operador::~Operador()
{
}
