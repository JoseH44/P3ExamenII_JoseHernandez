#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
#include "Object.h"

class Nodo
{
	protected:
		Nodo* next_nodo;
		Object* data;
	public:
		Nodo(Object*);
		//setter y getter de nodo
		Nodo* getNextNodo();
		void setNextNodo(Nodo*);
		Object* getData();
		~Nodo();
	protected:
};

#endif
