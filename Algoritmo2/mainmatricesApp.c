#include <stdio.h>
#include <stdlib.h>
#include "funcionmatrices.h"
#include "mTime.h"


#define SIZE_DATA (1024*1024*64*3)

static double MEM_CHUNK[SIZE_DATA];

int main(int argc, char **argv){
	//** -->doble puntero	
	int N;
	
	N=(int) atof(argv[1]);
	double *matrizA;
	double *matrizB;
	double *matrizC;
	
	
	matrizA = MEM_CHUNK; //Apunta a la posicion 0 de MEM_CHUNK
	matrizB = matrizA + N*N; //Se distancia N*N de la matrizA 
	matrizC = matrizB + N*N; //Se distancia N*N de la matrizB
	
	matrizInit(N, matrizA, matrizB, matrizC);
	
	//printf("Impresion matriz A \n");
	//imprimirMatriz(N, matrizA);
	//printf("\n");
	
	//printf("Impresion matriz B \n");
	//imprimirMatriz(N, matrizB);
	//printf("\n");
	
	sampleStart();
	
	//printf("Impresion multiplicacion de matriz A y B \n");
	multiplicacionMatrices(N, matrizA,matrizB, matrizC);
	//imprimirMatriz(N, matrizC);
	//printf("\n");
	
	sampleStop();
	printTime();
	
	return 0;
}
