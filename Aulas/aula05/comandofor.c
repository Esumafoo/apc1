#include <stdio.h>
int main (){
  int numero = 0;

  printf("Entre com um numero inteiro 1 e 10: ");
  int leu_certo = scanf("%i", &numero);

  printf("A tabuada de numero %i\n", numero);
  // for(int i=0; i<100000000000; i++) {
  //   printf("%i x %i = %i\n", numero, i+1, numero * (i+1));crescente
  // }
  for(int i=9; i>-1; i--) {
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
  }
  
  //laço infinito fo(int i=0; i >-1; i++){printf("ao infinito e alem!!"\n")}
  // printf ("%i x 1 = %i\n", numero, numero * 1);
  // printf ("%i x 2 = %i\n", numero, numero * 2);
  // printf ("%i x 3 = %i\n", numero, numero * 3);
  // printf ("%i x 4 = %i\n", numero, numero * 4);
  // printf ("%i x 5 = %i\n", numero, numero * 5);
  // printf ("%i x 6 = %i\n", numero, numero * 6);
  // printf ("%i x 7 = %i\n", numero, numero * 7);
  // printf ("%i x 8 = %i\n", numero, numero * 8);
  // printf ("%i x 9 = %i\n", numero, numero * 9);
  // printf ("%i x 10 = %i\n", numero, numero * 10);
  return 0;
}