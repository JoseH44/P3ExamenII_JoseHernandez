#include <iostream>
using namespace std;

#include <string>
using std::string;
using std::stoi;

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
	string entrada = "";
	vector<int> arreglo;
	int size;
	char name;
	while(entrada != "exit"){
		cout<<endl<<">>";
		
		cin>>entrada;
		
		if(entrada != "exit"){
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
				Object* obj1 = new Matriz(arreglo,size,name);
				Matriz* matrix  = dynamic_cast<Matriz*>(obj1);
				cout<<endl;
				matrix->printMatriz();
			}else
				cout<<endl<<"Debe ingresar un tamano de arreglo adecuado";
				
			//validacion para que sea un cuadrado perfecto	
			
		}//validacion para que no guarde exit
		
	}
	
	
	
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
