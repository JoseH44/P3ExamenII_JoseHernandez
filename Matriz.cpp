#include "Matriz.h"

Matriz::Matriz(vector<int> arregloNumeros,int pSize,char pNombre):Object()
{
	size = pSize;
	nombre = pNombre;
	matriz = NULL;
	matriz = new int*[size];
	for(int i = 0;i<size;i++){
		matriz[i] = new int[size];
	}
	
	//llenado de la matriz
	int contador = 0;
	for(int i = 0;i<size;i++){
		for(int j=0;j<size;j++){
			
			matriz[i][j] = arregloNumeros[contador];
			contador++;
		}
	}
}


void Matriz::printMatriz(){
	cout<<"-"<<nombre<<endl<<endl;
	for(int i = 0;i<size;i++){
		cout<<"| ";
		for(int j=0;j<size;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"|"<<endl;
		
	}
}

int Matriz::getSize(){
	return size;
}
char Matriz::getNombre(){
	return nombre;
}


Matriz::~Matriz()
{
}
