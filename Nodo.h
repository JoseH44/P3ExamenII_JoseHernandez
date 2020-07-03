#ifndef NODO_H
#define NODO_H

#include "Object.h"

class Nodo
{
	protected:
		Nodo* next_nodo;
		Object* data;
	public:
		Nodo();
		Nodo* getNextNodo();
		Object* getData();
		~Nodo();
	protected:
};

#endif
