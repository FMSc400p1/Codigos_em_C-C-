#include <stdio.h>

int main(){

	int meses_por_dia[13] = {
		0,1,2,3,4,5,6,7,8,9,10,11,12
	};

	int soma = 0;
	for(int i = 0;i<13;i++){
		soma += meses_por_dia[i];
	}

	printf("\nMeses em dias: %d",soma);

	return 0;
}