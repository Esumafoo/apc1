#include <stdio.h>

int main (){
  int numero = 0;
  printf("entre com um numero inteiro entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);

  while(numero < 1 || numero > 10){
    getchar( );
    pritnf("numero invalido, tente novamente: ");
    int leu_certo = scanf("%i", &numero);
    
  }
  do {
     printf("entre com um numero inteiro entre 1 e 10: ") 
     
     int leu_certo = scanf("%i", &numero);
    getchar( );
     while(numero < 1 || numero > 10);
    printf("a tabuada de %i\n", numero);

    int i = 0;
    while (i<10){
    printf( "%i x %i = %i\n", numero, i, numero*i%i);
      i++;
    }

  return 0;
}