#include "Nodo.h"

Nodo::Nodo()
{
}


Nodo* Nodo::getNextNodo(){
	return next_nodo;
}
Object* Nodo::getData(){
	return data;
}


void Nodo::setNextNodo(Nodo* pNextNodo){
	next_nodo = pNextNodo;
}

Nodo::~Nodo()
{
}
