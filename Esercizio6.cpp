#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;
#define dim 5

void riempiMatrice(int matrice[dim][dim]){

	srand(time(0));

	for (int i = 0; i < dim; i++)
	{
		for (int j=0; j < dim; j++){

			//la riepio con numeri da 1 a 10
			matrice[i][j] = 1+ rand()%10;
		}
	}

}

void stampaMatrice(int matrice[dim][dim]){

	for (int i = 0; i < dim; i++)
	{
		for (int j=0; j < dim; j++){

			// " " --> separa i numeri a stampa
			cout<<matrice[i][j]<<" ";
		}

		//vado a capo a ogni fine riga(per l'effetto grafico) endl --> end line 
		cout<<endl;
	}

}

void calcolaDiagonalePrincipale(int matrice[dim][dim]){

	float media = 0;
	int somma_p = 0;

	for (int i = 0; i < dim; i++){
		somma_p += matrice[i][i];
	}

	media = (float)somma_p / dim;
	cout<<"La media della diagonale principale e' "<<media<<endl;
}


void cacolaDiagonaleSecondaria(int matrice[dim][dim]){
	float media = 0;
	int somma_s = 0;

	//forma contratta
	
	// for (int i = 0, j=dim-1; i < dim; i++, j--){
	// 	somma_s += matrice[i][j];
	// }

	//forma non contratta
	int j = dim-1;
	for(int i=0; i < dim; i++){
	
		somma_s += matrice[i][j];
		j--;
		
	}


	media = (float)somma_s / dim;

	cout<<"La media della diagonale secondaria e' "<<media;

}



int main(){

	int matrice[dim][dim];

	riempiMatrice(matrice);

	stampaMatrice(matrice);

	calcolaDiagonalePrincipale(matrice);

	cacolaDiagonaleSecondaria(matrice);

}