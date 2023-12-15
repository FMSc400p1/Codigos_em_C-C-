#include <iostream>
using namespace std;

int main(){
  int somas1 = 0,somas2 = 0,somas3 = 0,somas4 = 0,somas5 = 0,somas6 = 0,somas7 = 0,somas8 = 0;
  int clientes_p_hora[8];
  char horas[8][25] = {
    "14h - 15h",
    "15h - 16h",
    "16h - 17h",
    "17h - 18h",
    "18h - 19h",
    "19h - 20h",
    "20h - 21h",
    "21h - 22h"
  };
  int horas_n[8] = {0,1,2,3,4,5,6,7};
  int clientes;
  int clientes_confirma;
  int clientes_soma = 0;
  int confirmar_horas;
  int repetir = 1;
  for(int i = 0;i<8;i++){
    horas_n[i];
    cout << "\n\n"<< horas[i]<<"\n";
    repetir = 1;
    while(repetir){
      clientes_confirma = 0;
      system("cls");
      cout << horas[i]<< "\n";
      cin >> clientes;
      if(clientes != 0){
        repetir = 1;
        clientes_confirma += clientes;//5
        clientes_soma += clientes_confirma;
      }
      else{
        repetir = 0;
      }
    }
    if(horas_n[i] == 0){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas1 += clientes_soma;
      cout << "Soma1 de clientes: "<< somas1;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 1){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas2 += clientes_soma;
      cout << "Soma2 de clientes: "<< somas2;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 2){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas3 += clientes_soma;
      cout << "Soma3 de clientes: "<< somas3;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 3){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas4 += clientes_soma;
      cout << "Soma4 de clientes: "<< somas4;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 4){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas5 += clientes_soma;
      cout << "Soma5 de clientes: "<< somas5;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 5){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas6 += clientes_soma;
      cout << "Soma6 de clientes: "<< somas6;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 6){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas7 += clientes_soma;
      cout << "Soma7 de clientes: "<< somas7;
      cout << "\n\n";
      system("pause");
    }else if(horas_n[i] == 7){
      cout << "\n\nHoras: "<<horas[i]<<"\n\n";
      somas8 += clientes_soma;
      cout << "Soma8 de clientes: "<< somas8;
      cout << "\n\n";
      system("pause");
    }
  }
cout << "\n\nTotal de clientes na loja: " << clientes_soma;
  return 0;
}
//1º Quantas pessoas entraram na loja
//2º Quantas pessoas entraram na loja e falaram com os vendedores
//3º Quantas pessoas entraram na loja, falaram com os vendedores e realizaram uma compra
//14 - 15
//total de clientes : 50
//15-16
//total de clientes : 25
//                            14 - 15             15 - 16           16 - 17
//                               50.
//                                        .
//                                                  .25       
//                                                          .
//                                                                      17