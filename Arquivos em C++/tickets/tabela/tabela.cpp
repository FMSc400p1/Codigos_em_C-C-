#include <iostream>

int main(){
	system("cls");
	int dia;
	std::cout << "INFORME O DIA DE HOJE\nR: ";
	std::cin >> dia;
	int linhas = 5;
	int colunas = 7;
	int tickets = 1;
	int contador = 1;
	int meta_dia = 8;
	int result_dia = 0;
	int cont = 0;
	std::cout << "\n\n\t\t\t   MES DE DEZEMBRO - TICKETS\n";
	std::cout << "\n\t\t--------------------------------------------------";
	for(int i = 0;i < linhas;i++){
		std::cout << "\n\n\t\t";
		for(int j = 0;j< colunas;j++){
			std::cout << contador << "\t";
			contador++;
			if(contador >= 31){
				break;
			}
			tickets++;
		}
		std::cout << "\n\n\t\t--------------------------------------------------";
	}
	std::cout << "\n\n";
	return 0;
}