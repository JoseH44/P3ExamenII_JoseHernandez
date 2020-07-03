#ifndef OPERADOR_H
#define OPERADOR_H

#include "Object.h"

class Operador : public Object
{
	protected:
	char signo;
	public:
		Operador(char);
		~Operador();
	
};

#endif
