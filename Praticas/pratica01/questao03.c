//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main(){
  int raio = 20;
  const float PI = 3.1416f;

  const char calculo = 2 * PI * raio;

  printf ("o perímetro da pizza é %d\n", calculo);
return 0;
}