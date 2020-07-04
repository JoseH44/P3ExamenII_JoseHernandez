#include <iostream>
using namespace std;

#include <string>
using std::string;
using std::stoi;
using std::find;

#include<Math.h>

#include <vector>
using std::vector;

#include "Object.h"
#include "Nodo.h"
#include "Matriz.h"
#include "Stack.h"


#include <fstream>
using std::ofstream;
using std::ifstream;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */


vector<int> parseo(string);


int main(int argc, char** argv) {
	vector<Matriz*> lista_matrices;
	
	string linea;
	int sizeCarga;
	char nombreCarga;
	vector<int> arregloCarga;
	
	//lectura de archivos
	ifstream lectura;
	lectura.open("matrices.txt",std::ios::in);
	if(lectura.is_open()){
		while(!lectura.eof()){
			string buffer;
			getline(lectura,buffer);
			linea = buffer;
			arregloCarga = parseo(linea);
			nombreCarga  = linea[0];
			sizeCarga = sqrt(arregloCarga.size());
			Matriz* matrixCarga = new Matriz(arregloCarga,sizeCarga,nombreCarga);
			lista_matrices.push_back(matrixCarga);
			
		}
	}
	lectura.close();
	
	string entrada = "";
	
	vector<int> arreglo;
	size_t found1;
	size_t found2;
	int size;
	char name;
	
	while(entrada != "exit"){
		cout<<endl<<">>";
		
		cin>>entrada;
		found1 = entrada.find('+');
		found2 = entrada.find('-');
		if(found1 != std::string::npos || found2 != std::string::npos ){
			//for que recorre la cadena para saber la operacion;
			for(int i = 0;i<entrada.size();i++){
				for(int j=0;lista_matrices.size();i++){
					if(entrada[i] == lista_matrices[j]->getNombre()){
						
					}
				}
			}
		}else if(entrada != "exit"){
			arreglo = parseo(entrada);
			size = sqrt(arreglo.size());
			if(size*size == arreglo.size()){
				//guardado en el archivo de texto
				ofstream escritura;
				escritura.open("matrices.txt",std::ios::out | std::ios::app);
				escritura<<entrada<<"\n";
				escritura.close();
				//fin del guardado
				name  = entrada[0];
				Matriz* matrix1 = new Matriz(arreglo,size,name);
				lista_matrices.push_back(matrix1);
				cout<<endl;
				matrix1->printMatriz();
			}else
				cout<<endl<<"Debe ingresar un tamano de arreglo adecuado";
				
			//validacion para que sea un cuadrado perfecto	
			
		}
		
	}
	
	for(int i = 0;i<lista_matrices.size();i++){
		delete lista_matrices[i];
	}
	
	lista_matrices.clear();
	
	return 0;
}

vector<int> parseo(string cadena){
	
	int valor,entero;
	string numero;
	
	vector<int> lista_numeros;
	for(int i = 0;i<cadena.size();i++){
		valor = (int)cadena[i];
		numero = "";
		numero+=cadena[i];
		if(valor>47 && valor<58){
			numero = cadena[i];
			
			entero = stoi(numero);
			lista_numeros.push_back(entero);
		}
	}
	return lista_numeros;
}
