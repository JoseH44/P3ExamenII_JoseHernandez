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
		
		//operador sobrecargado para la suma
		Matriz* operator+(Matriz* matrix1){
			vector<int> numerosSumados;
			int** matrizResultante = NULL;
			
			matrizResultante = new int*[size];
			for(int i = 0;i<size;i++){
				matrizResultante[i] = new int[size];
			}
			
			//suma 
			for(int i = 0;i<size;i++){
				for(int j=0;j<size;j++){
					matrizResultante[i][j] = matriz[i][j] + matrix1->getMatriz()[i][j];
				}
			}
			
			int n_contador;
			for(int i = 0;i<size;i++){
				for(int j = 0;j<size;j++){
					numerosSumados.push_back(matrizResultante[i][j]);
				}
			}
				
			Matriz* matrizResul = NULL;
			matrizResul = new Matriz(numerosSumados,size,'W');
			return matrizResul;
		}//fin operador de suma
		
		//resta
		Matriz* operator-(Matriz* matrix1){
			vector<int> numerosSumados;
			int** matrizResultante = NULL;
			
			matrizResultante = new int*[size];
			for(int i = 0;i<size;i++){
				matrizResultante[i] = new int[size];
			}
			
			//resta 
			for(int i = 0;i<size;i++){
				for(int j=0;j<size;j++){
					matrizResultante[i][j] = matriz[i][j] - matrix1->getMatriz()[i][j];
				}
			}
			
			int n_contador;
			for(int i = 0;i<size;i++){
				for(int j = 0;j<size;j++){
					numerosSumados.push_back(matrizResultante[i][j]);
				}
			}
				
			Matriz* matrizResul = NULL;
			matrizResul = new Matriz(numerosSumados,size,'W');
			return matrizResul;
		}//fin operador de suma
		
		int** getMatriz();
		
		int getSize();
		char getNombre();
		void printMatriz();
		~Matriz();
	
};

#endif
