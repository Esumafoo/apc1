//Faça um programa em C que calcule a área de um triângulo (a= base x altura/2). Considere a base e altura números inteiros maiores que 0.

#include <stdio.h>

int main(){

  unsigned int base = 10;
  unsigned int altura = 30;

  unsigned int calculo = base * altura/2;

  printf ("a area do triangulo é igual a %d\n", calculo);
  return 0;
}