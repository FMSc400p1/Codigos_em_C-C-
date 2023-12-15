#include <stdio.h>
#include <stdlib.h>
int main(){
	system("cls");
	int repetir = 1;
	while(repetir == 1){
		system("cls");
		float preco, somaPreco, media, contador;
		int i;
		i = 1;
		somaPreco = 0;
		contador = 1;
		printf("\n\tColoque o valor do produto e aperte \"Enter\"");
		printf("\n\tSe deseja parar de somar os valores, digita \"0\" e confirme.");
		while(preco!=0){
			preco = 0;
			printf("\n\n%do: ",i);
			scanf("%f",&preco);
			if(preco == 0){
				contador = contador - 2;
			}
			somaPreco = somaPreco + preco;
			i++;
			contador++;
		}
		media = somaPreco / contador;
		printf("\n\nQuantos foram: %.0f",contador);
		printf("\nSoma de todos: R$%.2f\n",somaPreco);
		printf("Media: R$%.2f",media);		
		int ans;
		printf("\n\nRepetir(1=Sim)? ");
		scanf("%d",&ans);
		if(ans == 1){
			repetir = 1;
			preco = 1;
		}else{
			repetir = 0;
		}
	}
	system("pause");
	system("cls");
	return 0;
}