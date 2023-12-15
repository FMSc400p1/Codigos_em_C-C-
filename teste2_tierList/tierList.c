#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char perguntas[7][30] = {
		"Primeira Vez:\t",
		"Mecanicas & Gameplay:",
		"Trilha Sonora:\t",
		"Desbloqueaveis:",		
		"Fator Replay:\t",
		"Extra:\t\t",
		"100%:\t\t"
	};
	int notas[6] = {
		5,4,3,2,1,0
	};
	char escrita[6] = {
		'S','A','B','C','D','F'
	};
	char quest[6];
	int i, soma;
	char resposta;
	soma = 0;
	for(i = 0;i<7;i++){
		printf("\n %s\t\t",perguntas[i]);
		scanf(" %c",&resposta);
		switch(resposta){
			case 'S':
				soma += notas[0];
				quest[0] = escrita[0];
				break;
			case 'A':
				soma += notas[1];
				quest[1] = escrita[1];
				break;
			case 'B':
				soma += notas[2];
				quest[2] = escrita[2];
				break;
			case 'C':
				soma += notas[3];
				quest[3] = escrita[3];
				break;
			case 'D':
				soma += notas[4];
				quest[4] = escrita[4];
				break;
			case 'F':
				soma += notas[5];
				quest[5] = escrita[5];
				break;
			default:
				printf("\nDesculpe não entendi!");
		}
	}
	printf("\n");
	printf("\nNota total: %d\n\n",soma);
	system("pause");
	system("cls");
	return 0;
}