#include <stdio.h>

int main() {
    int num1;
    int num2;
    int resultado;
    printf("digite um número:\n");
    scanf("%d",&num1);
    printf("digite outro número:\n");
    scanf("%d",&num2);
    resultado = num1 + num2;
    printf("soma=%d", resultado);
  return 0;
}