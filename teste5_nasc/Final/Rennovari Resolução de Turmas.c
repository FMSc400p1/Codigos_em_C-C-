#include <stdio.h>
#include <stdlib.h>
int main(){
	int ans,repetir = 1;	
	while(repetir){
		ans = 0;
			system("cls");//		0  1  2  3  4  5  6  7  8  9  10 11	
			int calend_valrs[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
			int mesNasc,diaNasc,anoNasc;
			printf("\n\t-\tNascimento\t-");
			printf("\nDia: ");
			scanf("%d",&diaNasc);
			printf("\nMes: ");
			scanf("%d",&mesNasc);
			int mesNascConvert = 0;
				mesNascConvert = mesNascConvert + mesNasc;
			int mesNascConvertD = mesNascConvert - 1;
			printf("\nAno: ");
			scanf("%d",&anoNasc);
			int j = 0;
				for(int i=0;i<mesNasc;i++){
					j += calend_valrs[i];
				}
			int mesCompleto = 0;
				mesCompleto += j;
				mesCompleto = mesCompleto - calend_valrs[mesNascConvertD];
				mesCompleto += diaNasc;
			int anoLimite = 2024;
			int calculoAno;
				calculoAno = anoLimite - anoNasc;
			int anoS_Arredondar = calculoAno - 1; //2024 - 2021 = 3 - 1 = 2
			int soma = 0;
				for(int i = 0;i<3;i++){
					soma += calend_valrs[i];
				}
			int contadorAno = soma;
			int contadorNasc = mesCompleto;
			int numero = 0;
			while(numero < contadorAno){
				numero++;
				if(numero >= contadorNasc){
					anoS_Arredondar++;
					break;		
				}
			}
			int idadeFinal = anoS_Arredondar;
			system("cls");
			printf("\nData de Nascimento: %02d/%02d/%d\n",diaNasc,mesNasc,anoNasc);
			printf("\nIdade ate 31/03/2024: %d ano(s) de idade!\n",idadeFinal);
			if(idadeFinal < 2){
				printf("\n\tAluno muito novo para a educacao infantil!");
			}
			else if(idadeFinal == 2){
				printf("\n\tTURMA: MATERNAL 1\t");
			}
			else if(idadeFinal == 3){
				printf("\n\tTURMA: MATERNAL 2\t");
			}
			else if(idadeFinal == 4){
				printf("\n\tTURMA: JARDIM 1");
			}
			else if(idadeFinal == 5){
				printf("\n\tTURMA: JARDIM 2");
			}
			else{
				printf("\n\tAluno nao tem mais idade para a educacao infantil!");
			}
			printf("\n\n");
			system("pause");
		printf("\nDeseja Repetir: 1=Sim/2=Nao\n\nR: ");
		scanf("%d",&ans);
		if(ans == 1){	
			repetir = 1;	
		}else{	
			repetir = 0;	
		}	
	}
	return 0;
}