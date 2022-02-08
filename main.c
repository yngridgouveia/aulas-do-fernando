#include <stdio.h>

int main(void) {
  int numero;
  float fracionario;
  char nome[8];
  //nome = "yngrid";
  fracionario = 2.5;
  numero = 9;
  printf("o número é = %d\n",numero);
  printf("o\n fracionario= %f",fracionario);
  // %f para números fracionarios.
  // %d para números inteiros.
  // \n = a enter. 
  // strcpy para escrever textos --- nas var. texto não é permitido usar "=".
  printf("\nDigite um número por favor:\n");
  scanf("%d",&numero);
  printf("\nVocê digitou o número:%d",numero);
  return 0;
}