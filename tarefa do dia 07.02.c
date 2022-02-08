#include <stdio.h>

int main(void) {
  int idade;
  int ano;
  int resultado;
  char nome[20];
  printf("\nbom dia!\n");
  printf("descobra em que ano você nasceu siga as orientações abaixo!\n\n");
  printf("qual é o sue nome?\n");
  scanf("%s",nome);
  printf("\nDigite a sua idade:\n");
  scanf("%d",&idade);
  printf("\nDigite o ano em que você está:\n");
  scanf("%d",&ano);
  resultado = ano - idade;
  printf("\n%s você nasceu em:%d\n ",nome,resultado);
  return 0;
}