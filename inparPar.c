#include <stdio.h>

int main(){
  int numero;
  printf("Digite um numero inteiro \n");
  scanf("%d", &numero);
  if (numero / 2 == 0)
  {
    printf("O numero %d eh par \n", numero);
  }
  else
  {
    printf("O numero %d eh inpar \n", numero);
  }
  
}