#include <stdio.h>
#include <stdlib.h>
int main(){
	int calend_valrs[12] = { //variavel array "calendario valores" com 12 espaços para saber o valor de cada em "Dias"!
		31, //0
		28, //1
		31, //2
		30, //3
		31, //4
		30, //5
		31, //6						Valores dos meses para contar quantos dias tem em cada!
		31, //7
		30, //8
		31, //9
		30, //10
		31  //11
		};

	char calend_meses[12][12] = {// variavel array "calendario meses" com 12 linhas e 12 colunas de espaço, pra escrever o mes!
		"Janeiro:",
		"Fevereiro:",
		"Marco:\t",
		"Abril:\t",
		"Maio:\t",
		"Junho:\t",		//Para identificar qual mes a criança nasceu de acordo com o numero que a pessoa informa!
		"Julho:\t",
		"Agosto:\t",
		"Setembro:",
		"Outubro:",
		"Novembro:",
		"Dezembro:"};

	int mesNasc,diaNasc,anoNasc;						//Dia, Mês e Ano de nascimento!
	printf("\nQue dia a crianca nasceu: ");
	scanf("%d",&diaNasc);
	printf("\nQue mes a crianca nasceu: "); 			//input de informações básicas
	scanf("%d",&mesNasc);
	int mesNascConvert = 0;
	mesNascConvert = mesNascConvert + mesNasc;
	int mesNascConvertD = mesNascConvert - 1;
	printf("\nQue ano a crianca nasceu: ");
	scanf("%d",&anoNasc);

	int j = 0;														//variavel para se usar fora do loop "for"
		for(int i=0;i<mesNasc;i++){									//loop "for" para contar quantos dias completos  crianca tem só pelos meses
			j += calend_valrs[i];									//Ex: Se ela nasceu em janeiro -> ela tem 28 dias 							
		}

	int mesCompleto = 0;											//Contagem de dias do mes, mas zerando ele para o inicio do mes anterior
	mesCompleto += j;												//e somando com a data que ela nasceu, Ex: se ela nasceu em 15 de março
	mesCompleto = mesCompleto - calend_valrs[mesNascConvertD];		//de janeiro até março tem 60 dias, então zera esse mes, e soma com o dia
	mesCompleto += diaNasc;

	int diaLimite = 31;												//Dia, Mês e Ano limite para se basear no conversor de idade
	int mesLimite = 2;
	int anoLimite = 2024;
	int quantos_anos = anoLimite - anoNasc;							//Quantos anos a crianca tem em anos aproximados com as datas limites
	
	int anos_Exato = quantos_anos - 1;								//Contador de anos resetado pra ir junto com os dias 

	int anosExataEmDias = anos_Exato * 365;
	int idadeCompleta = mesCompleto + anosExataEmDias;

	int diasCover = 0;
	int rew;
	for(rew = 0;rew < (anoLimite - 2019);rew++){
	}
	int novaContagem = rew * 365;
	int novaContagemLimite = 0;
	novaContagemLimite = novaContagem + 90;

	int idade_do_aluno = 0;
	idade_do_aluno += idadeCompleta;

	// printf("\n\n5 anos em dias + a data limite que e o dia 31 do mes 3 e: %d",novaContagemLimite);
	// printf("\nIdade completa do Aluno em dias: %d",idadeCompleta);

	int novaIdade = 0;
	novaIdade += idadeCompleta;
	printf("\nIdade completa do aluno: %d",novaIdade);

	int ko;
	int no;
	int contador = 0;
	for(ko = 0;k<=novaContagemLimite;k+=365){
		while(){
			
		}
		contador++;
	}

	return 0;
}