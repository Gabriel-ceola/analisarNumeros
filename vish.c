#include <stdio.h>

  int num1;
  int num2;

  int main(){
    printf("Digite um numero: ", num1);
    scanf("%d", &num1);
    printf("Digite outro numero: ", num2);
    scanf("%d", &num2);
    if (num1 > num2)
    {
      printf("O numero 1 eh maior que o numero 2. \n");
    }else
    {
      printf("O numero 2 eh maior que o numero 1. \n");
    }
  
}