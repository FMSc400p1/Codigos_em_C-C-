#include <iostream>
using namespace std;
int main()
{
  char horarios[8][25] = {
    "\n\tHorario: 14h <-> 15h\n",
    "\n\tHorario: 15h <-> 16h\n",
    "\n\tHorario: 16h <-> 17h\n",
    "\n\tHorario: 17h <-> 18h\n",
    "\n\tHorario: 18h <-> 19h\n",
    "\n\tHorario: 19h <-> 20h\n",
    "\n\tHorario: 20h <-> 21h\n",
    "\n\tHorario: 21h <-> 22h\n"};

  int confirmarHorario = 0;//var para a troca de horario
  int clientes = 0;//var para confirmar o loop de repetição while
  int cliente_confirma;//var simbólica para usar como soma, mas não acumula valores
  int clientesSoma = 0;//var usada para somar q quantidade total dos clientes em modo geral
  int clientesSoma_final;
  int continuar = 1;//var do loop while
  int i;

  for (int i = confirmarHorario; i < 8; i++)//Loop pra troca de horario
  {
    continuar = 1;//reset de variavel pra continuar o loop e quando termimar, o input será feito novamente
    while (continuar)//Loop para continuar a adicionar ou zerar o horário
    {
      clientesSoma_final = 0;
      cliente_confirma = 0;//var simbólica é zerada para usar o próximo valor de forma limpa
      system("cls");//limpa a tela
      cout << horarios[i];//var usada para mostrar o horario em que está sendo feito a contagem
      cout << "Clientes ate o momento: " << clientesSoma;
      cout << "\nClientes na loja: ";
      cin >> clientes;//var de confirmação para continuar ou não o loop
      if (clientes == 0)//Se o valor for igual a zero, o loop será parado
      {
        continuar = 0;//Valor do loop será colocado para zero, e assim fechando o loop
        confirmarHorario += 1;//variavel não usada
      }
      else//Se o valor for diferente do que zero, cotinuará o loop e somará outros valores
      {
        cliente_confirma += clientes;//valor simbólico dos clientes no momento, mas não acumula
        clientesSoma += cliente_confirma;//Variavel que soma com o valor dos clientes indepente dos loop
      }
    }
    clientesSoma_final += clientesSoma;
    // soma_horarios[i] = clientesSoma_final;//quando o horário terminar, será adicionado em um array de valores
  }
  // cout<<"\n\nClientes na loja: "<<clientesSoma;//Quantidade de clientes em modo final	

  for(int i = 0;i < 8; i++)//teste pra ver os valores dentro do array
  {
    cout << "\n" << soma_horarios[i];
  }
  return 0;
}