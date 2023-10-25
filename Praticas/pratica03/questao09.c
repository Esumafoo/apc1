/*Faça um programa em C que leia dez números e imprima o maior e o menor entre eles*/

 #include <stdio.h>
 int main(){
//   int numero = 0;
//   int maior = 0;
//   int menor = 0;
//   for(int i = 0; i < 10; i++){
//     printf("Digite um numero: ");
//     int leu_certo = scanf("%d", &numero);
//     if(i == 0){
//       maior = numero;
//       menor = numero;
      
  
  
//   return 0;
// }

    int numero = 0;
    printf("entre com um numero inteiro: ");
    int leu_certo = scanf("%i", &numero);

    int maior = numero;
    int menor = numero;

    for(int i=0; i<9; i++) {
      printf("entre com outro numero inteiro: ");
      leu_certo = scanf("%i", &numero);

      if(numero > maior){
        maior = numero;
      }
      if(numero < menor){
        menor = numero;
      }
    }
    printf("O maior eh: %i e o menor eh %i\n", maior, menor);
   return 0;
 }