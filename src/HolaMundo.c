#include <stdlib.h>
#include <stdio.h>

double *dobleAleatorio(int cantidad);

int main(){
	srand(time(0));
	double *num;
	num = dobleAleatorio(5);
	for(int i=0;i<5;i++){
		printf("Doble: %.2lf\n", num[i]);
	}
}

double *dobleAleatorio(int cantidad){
	double *num = (double*) malloc(cantidad * sizeof(double));

	for(int i=0;i<cantidad;i++){
		num[i] = (double) (rand() % 11) / 1.57;
	}
	return num;
}
