#include <iostream>
int main(){
	system("cls");
	int i = 1,ans,repetir = 1;
	double valor, media;
	double valor_soma = 0;
	int revolt = 0;
	while(revolt <=1){
		if(revolt == 0){
			std::cout << "\n\n\tInforme o valor do produto OU digite \"0\" para encerrar!\n";
		}
		while(repetir){
			ans = 0;
			std::cout << "\n" << i << "o produto: ";
			std::cin >> ans;
			if(ans != 0){
				repetir = 1;
				valor = ans;
				valor_soma += valor;
				i++;
			}else{
				repetir = 0;
			}
		}
	revolt++;
	}
	i--;
	media = valor_soma / i;
	std::cout <<  "\n\n\t========================\n";
	std::cout << "\nQtd de produtos: " << i;
	printf("\n\nValor no total: R$ %.2f",valor_soma);
	printf("\nMedia dos items: R$ %.2f\n",media);
	return 0;
}