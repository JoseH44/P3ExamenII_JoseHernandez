#include "Nodo.h"

Nodo::Nodo(Object* Pdata)
{
	next_nodo = NULL;
	data  =Pdata;
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
