
#include<stdio.h>
void sumaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
	int N=3;
	for (int i=0; i < N; i++){
	
		for (int j=0; j < N; j++){
		
			matrizC[i][j]=matrizA[i][j] + matrizB[i][j];}
			}
}

void restaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
int N=3;
	for (int i=0; i < N; i++)
		for (int j=0; j < N; j++)
			matrizC[i][j]=matrizA[i][j] - matrizB[i][j];
}

void multiplicacionMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
	int N=3;
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			matrizC[i][j]=0;
			for (int k=0; k < N; k++){
			matrizC[i][j] += matrizA[i][k]*matrizB[k][j];
		}
		}
	}
}
void matrizTranspuesta(int matrizA[3][3], int matrizC[3][3]){
	int N=3;
	for (int i=0; i < N; i++)
		for (int j=0; j < N; j++)
			matrizC[i][j]=matrizA[j][i];
}

void imprimirMatriz(int matrizR[3][3]) {
	int N=3;
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++)
			printf("%d\t", matrizR[i][j]);
			printf("\n");
			}
}

int main(){
	int N=3;
	int matrizA[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int matrizB[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int matrizC[3][3]= {{0,0,0},{0,0,0},{0,0,0}};
	
	printf("Impresion matriz A \n");
	imprimirMatriz(matrizA);
	printf("\n");
	
	printf("Impresion matriz B \n");
	imprimirMatriz(matrizB);
	printf("\n");
	
	printf("Impresion suma de matriz A y B \n");
	sumaMatrices(matrizA,matrizB, matrizC);
	imprimirMatriz(matrizC);
	printf("\n");
	
	printf("Impresion resta de matriz A y B \n");
	restaMatrices(matrizA,matrizB, matrizC);
	imprimirMatriz(matrizC);
	printf("\n");
	
	printf("Impresion multiplicacion de matriz A y B \n");
	multiplicacionMatrices(matrizA,matrizB, matrizC);
	imprimirMatriz(matrizC);
	printf("\n");
	
	printf("Impresion transpuesta de matriz A \n");
	matrizTranspuesta(matrizA, matrizC);
	imprimirMatriz(matrizC);
	printf("\n");
	
	return 0;
}


