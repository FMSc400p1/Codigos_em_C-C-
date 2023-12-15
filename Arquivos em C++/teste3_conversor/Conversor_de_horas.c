#include <iostream>
#include <string>

int main(){

	int tempo_tot;
	int horas,minutos;
	int tempo_limite = 60;
	int i;
	std::cout << "\nQuanto tempo ainda resta em minutos?\nR: ";
	std::cin >>tempo_tot;

	for(i = 0;i<tempo_tot;i++){//Se for fazer por loop de repetição
		tempo_tot = tempo_tot - tempo_limite;
		if(tempo_tot < tempo_limite){
			minutos = tempo_tot;
		}
	}
	horas = i;
	// horas = tempo_tot / 60;//se for fazer por calculo
	// minutos = tempo_tot % 60;

	// std::cout << "\n\nTempo restante :" << horas << "h" << minutos << "m.";
	printf("\n\nTempo restante: %02dh:%02dm.",horas,minutos);
	return 0;
}