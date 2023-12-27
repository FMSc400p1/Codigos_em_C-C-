#include <iostream>
#include <Windows.h>
#include <ctime>

int main(){
    std::time_t tempoAtual = std::time(nullptr);
    std::tm *infoTempo = std::localtime(&tempoAtual);
    int diaDoMes = infoTempo->tm_mday;
	system("cls");
	std::cout << "\n\n\tCONTABILIZADOR DE TICKETS - META DIARIA\n\n";
	system("pause");
	system("cls");
	int meta_dia = 8;
	int result_dia = 0;
	int cont = 0;
	std::cout << "\n\n";
	std::cout << "\t\t\tashvd6739hadjhd7a00da99adcnvkkdjh";
	for(int i = 1;i<=31;i++){
		if(i == 4 || i == 10 || i == 18 || i == 24){
			Sleep(15);
			printf("\nDia %02d:-------FOLGA",i);
		}
		else if(i == 25){
            Sleep(15);
            printf("\nDia %02d:-------NATAL",i);
		}
		else{
			if(diaDoMes == i){
				cont++;
				result_dia = cont * meta_dia;
                		Sleep(15);
				printf("\nDia %02d:\t\t%02d < ======= DIA DE HOJE!",i,result_dia);
			}else{
				cont++;
				result_dia = cont * meta_dia;
				Sleep(15);
				printf("\nDia %02d: \t%02d",i,result_dia);
			}
		}
	}
	std::cout << "\n\n";
	system("pause");
	system("cls");
	return 0;
}
