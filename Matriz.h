#ifndef MATRIZ_H
#define MATRIZ_H
#include "Object.h"

#include <iostream>
using namespace std;

#include <vector>
using std::vector;

class Matriz : public Object 
{
	protected:
		int size;
		char nombre;
		int** matriz;
	public:
		Matriz(vector<int>,int,char);
		int getSize();
		char getNombre();
		void printMatriz();
		~Matriz();
	
};

#endif
