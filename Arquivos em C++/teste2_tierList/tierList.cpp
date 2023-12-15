#include <iostream>
#include <string>
int main(){
	system("cls");
	std::string nome,nota_str;
	std::cout<<"\nQual o nome do jogo: ";
	std::getline(std::cin,nome);
	system("cls");
	std::string perguntas[6];
	int repetir=0,contador=1,perg;
	while(repetir<1){
		system("cls");
		std::cout<<"\n\n\t\t- Escolha 6 categorias para o jogo: \n\n\t\t\t\t"<<nome<<"\n\n";
		for(perg=0;perg<6;perg++){
			std::cout<<contador<<"a: ";
			std::getline(std::cin,perguntas[perg]);
			contador++;}
		repetir++;}
	system("cls");
	std::string grades[9]={"S++","S+","S","A","B","C","D","E","F"},grades_confirm;
	int grades_int[9]={8,7,6,5,4,3,2,1,0},grades_sum=0,loopar_while=0,h,n;
	while(loopar_while<1){
		for(h=0;h<6;h++){
			system("cls");
			std::cout<<"\nSobre "<< nome<<", que nota seria para: \n\n\t\t"<< perguntas[h]<<"\n";
			std::cout<<"\n\t\"S++\"\t = Perfeito\n\t\"S+\"\t = Quase perfeito\n\t\"S\"\t = Muito Bom";
			std::cout<<"\n\t\"A\"\t = Bom\n\t\"B\"\t = Regular\n\t\"C\"\t = Um pouco ruim";
			std::cout<<"\n\t\"D\"\t = Ruim\n\t\"E\"\t = Muito Ruim\n\t\"F\"\t = Horrivel\n\n\tR: ";
			std::cin >> grades_confirm;
			for(n=0;n<9;n++){
				if(grades_confirm==grades[n]){
					grades_sum=grades_sum+grades_int[n];
					break;}
				else{
					continue;
					if(grades_confirm!=grades[n]||(grades_confirm!=grades[n]&&h==8)){
						std::cout<<"\nResposta não entendida";}
				}
			}
		}
		loopar_while++;
	}
if(grades_sum==48){
	std::cout<<"\nNota final: Perfeito";
	nota_str="S++";}
else if(grades_sum>=42&& grades_sum<48){
	std::cout<<"\nNota final: Quase perfeito";
	nota_str="S+";}
else if(grades_sum>=36&&grades_sum<42){
	std::cout<<"\nNota final: Muito Bom";
	nota_str="S";
}else if(grades_sum>=30&& grades_sum<36){
	std::cout<<"\nNota final: Bom";
	nota_str="A";
}else if(grades_sum>=24&&grades_sum<30){
	std::cout<<"\nNota final: Regular";
	nota_str="B";
}else if(grades_sum>=18&&grades_sum<12){
	std::cout<<"\nNota final: Um pouco Ruim";
	nota_str="C";
}else if(grades_sum>=6&&grades_sum<18){
	std::cout<<"\nNota final: Ruim";
	nota_str="D";
}else if(grades_sum>0&&grades_sum<6){
	std::cout<<"\nNota final: Muito ruim";
	nota_str="E";
}else{
	std::cout<<"\nNota final: Horrível";
	nota_str="F";}
std::cout<<"\n\nNota de pontos: "<<grades_sum<<"\n\n";
system("pause");system("cls");
	return 0;
}