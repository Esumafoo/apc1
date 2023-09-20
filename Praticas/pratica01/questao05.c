/* Faça um programa em C que converta um valor qualquer em Gigabytes*/

#include <stdio.h>
#include <math.h>

int main (){
  double valor_em_giga = 10;

  double valor_em_bytes = valor_em_giga * pow(1024, 3);

  printf("o valor em giga %.f em byte é %.f\n", valor_em_giga, valor_em_bytes);

  return 0;
}