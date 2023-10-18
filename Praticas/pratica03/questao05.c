// faça um programa em C que leia um ano e verifique se ele é bissexto(é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400)
#include <stdio.h>
int main(){
  int ano = 0;
  printf("Entre com o ano desejado: ");
  int leu_certo = scanf("%i", &ano);

  int eh_multiplo_de_4 = ano % 4 ==0;
  int nao_eh_multiplo_de_100 = ano % 100 != 0;
  int eh_multiplo_de_400 = ano % 400 ==0;

  if (eh_multiplo_de_4 && nao_eh_multiplo_de_100 || eh_multiplo_de_400){
    printf("O ano %i eh bissexto!\n", ano);
  }
  else{
    printf("O ano %i nao eh bissexto!\n", ano);
       }
  

  return 0;
}