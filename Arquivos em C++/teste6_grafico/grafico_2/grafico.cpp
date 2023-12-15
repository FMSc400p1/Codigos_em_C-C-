#include <iostream>
using namespace std;
int main()
{
  char horarios[8][25] = {
    "14h - 15h",
    "15h - 16h",
    "16h - 17h",
    "17h - 18h",
    "18h - 19h",
    "19h - 20h",
    "20h - 21h",
    "21h - 22h"};
    
  int clientes_pHorario[8];
  int soma_clientes = 0;
  for(int i = 0;i<8;i++)
  {
    system("cls");
    cout << "\n\tHorario: " << horarios[i]<<"\n";
    cout << "Clientes na loja: ";
    cin >> clientes_pHorario[i];
    soma_clientes += clientes_pHorario[i];
  }

  cout << "\n>> Clientes de acordo com os horarios <<";
  for(int j = 0;j<8;j++)
  {
    cout <<"\n"<<horarios[j]<<": "<<clientes_pHorario[j];  
  }

  cout << "\nSoma total dos clientes na loja: "<<soma_clientes;
  return 0;
}