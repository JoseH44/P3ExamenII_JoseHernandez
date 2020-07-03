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

Nodo::~Nodo()
{
}
