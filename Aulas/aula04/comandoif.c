#include <stdio.h>

int main(){
 int numero = 0;

  printf("entre com um número inteiro:");
  int leu_certo = scanf("%i", &numero);
  if(leu_certo){

  if (numero % 2 == 0) { 
   printf("O numero %i eh par!\n", numero);
     } 
  else {
    printf("O numero %i eh impar!\n", numero);
     }

  // int numero_nao_eh_divisivel_por_2 = !(numero % 2 == 0 );

  // if(numero_nao_eh_divisivel_por_2){
  //   printf("O numero %i eh impar!\n", numero);
  // }
  } else {
    printf("Nao eh um numero inteiro.Tente novamente!\n");
      }
  return 0;
}
//site asci generator TAAG 