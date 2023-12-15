#include <stdio.h>
#include <stdlib.h>
int main(){
	int ans, repetir = 1;
	while(repetir){	
		//system("cls");
		ans = 0;
		printf("\nDeseja Repetir: 1=Sim/2=Nao\n\nR: ");
		scanf("%d",&ans);

		if(ans == 1){	
			repetir = 1;	
		}else{	
			repetir = 0;	
		}	
	}
	system("pause");
	system("cls");

	return 0;
}