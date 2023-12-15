#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ans,repetir = 1;	
	while(repetir)
	{
		ans = 0;//			
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


			int novo_diaNasc = 0; 
			int novo_mesNasc = 0;
			int novo_anoNasc = 0;

			novo_diaNasc += diaNasc;
			novo_mesNasc += mesNasc;
			novo_anoNasc += anoNasc;

			int novo_anoLimite = 2024;
			int novo_idade_em_ano = 0;

			novo_idade_em_ano = novo_anoLimite - novo_anoNasc; 

			novo_mesNasc = novo_mesNasc - 1;	//Ao inves de pegar o mes pelo calendario é feito pelo valor do array
			int novo_mesNasc_resetado  = 0;		//Para começar a contagem, é feita uma variavel de data reset
			novo_mesNasc_resetado += calend_valrs[novo_mesNasc];//O valor é colocado com o valor do mes bruto do mes de nasc.
			novo_mesNasc_resetado  = novo_mesNasc_resetado - calend_valrs[novo_mesNasc];//Valor é resetado por ele mesmo
			novo_mesNasc_resetado += novo_diaNasc;//E o mes resetado é adicionado com o dia que a pessoas
			int novo_mes_em_dias = 0;

			for(int i = 0;i<novo_mesNasc;i++){
				novo_mes_em_dias += calend_valrs[i];
			}

			novo_mes_em_dias = novo_mes_em_dias + novo_diaNasc;


			int valor_limite_Reset = 0;
			valor_limite_Reset = 365 - novo_mes_em_dias;


			int cmaM = 0;
			int deposito;
			for(deposito = novo_mesNasc_resetado; deposito < valor_limite_Reset;deposito++){}

			int meses_stop = 0;
			int dep_2;
			for(dep_2 = 0;dep_2 <= 90;dep_2++)
			{
				if(dep_2 == 90){
					meses_stop  = deposito + dep_2;
					break;
				}
			}
			meses_stop += 1;
			
			int j = 0;
				for(int i=0;i<mesNasc;i++)
				{
					j += calend_valrs[i];
				}
			int mesCompleto = 0;
				mesCompleto += j;
				mesCompleto = mesCompleto - calend_valrs[mesNascConvertD];
				mesCompleto += diaNasc;
			int anoLimite = 2024;
			int calculoAno;
				calculoAno = anoLimite - anoNasc;
			int anoS_Arredondar = calculoAno - 1;
			int soma = 0;
				for(int i = 0;i<3;i++)
				{
					soma += calend_valrs[i];
				}
			int contadorAno = soma;
			int contadorNasc = mesCompleto;
			int numero = 0;
			while(numero < contadorAno)
			{
				numero++;
				if(numero >= contadorNasc)
				{
					anoS_Arredondar++;
					break;		
				}
			}
			int idadeFinal = anoS_Arredondar;
			int meses_cru = 0;

			if(meses_stop > 242)
			{
				meses_cru = meses_cru + 8;
			}

			printf("\nMeses Cru: %d",meses_cru);

			printf("\nData de Nascimento: %02d/%02d/%d\n",diaNasc,mesNasc,anoNasc);
			printf("\nIdade ate 31/03/2024: %d ano(s)!\n",idadeFinal,meses_cru);

			if(idadeFinal == 0)
			{
				if(meses_stop >= 243)
				{
					printf("\n\tBercario!");
				}
			}
			else if(idadeFinal == 1)
			{
				if(meses_stop > 273)
				{
					printf("\n\tPre-Maternal!");
				}
			}
			else if(idadeFinal < 2)
			{	
				// if(meses_stop >= 243)
				// {
				// 	printf("\n\tBercario!");
				// }
				// else if(meses_stop >= 273)
				// {
				// 	printf("\n\tPre-Maternal!");
				// }
				// else{
				// }
					printf("\n\tAluno muito novo para a educacao infantil!");
			}
			else if(idadeFinal == 2)
			{
				printf("\n\tTURMA: MATERNAL 1\t");
			}
			else if(idadeFinal == 3)
			{
				printf("\n\tTURMA: MATERNAL 2\t");
			}
			else if(idadeFinal == 4)
			{
				printf("\n\tTURMA: JARDIM 1");
			}
			else if(idadeFinal == 5)
			{
				printf("\n\tTURMA: JARDIM 2");
			}
			else
			{
				printf("\n\tAluno nao tem mais idade para a educacao infantil!");
			}
			printf("\n\n");
			system("pause");
		printf("\nDeseja Repetir: 1=Sim/2=Nao\n\nR: ");
		scanf("%d",&ans);
		if(ans == 1)
		{	
			repetir = 1;	
		}
		else
		{	
			repetir = 0;	
		}	
	}
	return 0;
}