#include <stdio.h>

int main(void) {
  int idade;
  float altura;
  float peso;
  char nome[20];
  printf("CADRASTRO");
  printf("\n-------------//------------------------\n");
  printf("--- ----!\n por favor preecher as informações pedidas abaixo\n");
  printf("-------------//------------------------");
  printf("\nqual seu nome:\n");
  scanf("%s",nome);
  printf("-------------//------------------------");
  printf("\nqual sua idade:\n");
  scanf("%d",&idade);
  printf("\n-------------//------------------------");
  printf("\nqual sua altura:\n");
  scanf("%f",&altura);
  printf("\n-------------//------------------------");
  printf("\nqual é o seu peso?\n");
  scanf("%f",&peso);
  printf("\n-------------//------------------------\n");
  printf("%s de acordo com as suas informações você tem %d anos,\n%f de altura e pesa %f\n",nome,idade,altura,peso);
  return 0;
}