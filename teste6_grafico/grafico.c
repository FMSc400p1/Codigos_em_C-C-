#include <stdio.h>
#include <stdlib.h>
int main(void){
  int horario[9] = {0,1,2,3,4,5,6,7,8};
  char horarios[9][50] = {
    "\n\tHorario: 14h <-> 15h\n",
    "\n\tHorario: 15h <-> 16h\n",
    "\n\tHorario: 16h <-> 17h\n",
    "\n\tHorario: 17h <-> 18h\n",
    "\n\tHorario: 18h <-> 19h\n",
    "\n\tHorario: 19h <-> 20h\n",
    "\n\tHorario: 20h <-> 21h\n",
    "\n\tHorario: 21h <-> 22h\n"};
  int confirmarHorario = 0;
  int clientes = 0;
  int clientesSoma = 0;
  int continuar = 1;
  for(int nova = confirmarHorario;nova < 8;nova++){
    continuar = 1;
    while(continuar){
      system("cls");
      printf(" %s",horarios[nova]);
      printf("\n\n- 0 >> proximo horario -");
      printf("\nClientes na loja: ");
      scanf("%d",&clientes);
      if(clientes == 0){
        continuar = 0;
        confirmarHorario +=1;
      }else{
        clientesSoma += 1;
      }
    }
  }
  printf("\nClientes na loja: %d",clientesSoma);
  return 0;
}