#include <stdio.h>

int main(){
  int inicio;
  int fim;
  int total;
  printf("Digite a hora de inicio: ");
  scanf("%d", &inicio);
  printf("Digite a hora de termino: ");
  scanf("%d", &fim);

  if (inicio == fim)
  {
    total = 24;
  }else if (fim < inicio){
    inicio = inicio - 24;
    total = fim - inicio;
  }else{
    total = fim - inicio;
  }
  printf("O jogo durou %d horas\n ", total);
  
}