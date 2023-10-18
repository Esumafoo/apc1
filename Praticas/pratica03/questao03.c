// Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente; 4 = Bom; 5 = Otimo, e imprima Nota inválida nos demais casos.


// #include <stdio.h>

// int main(){
//   int nota = 0;
//   printf("Entre com a Nota do motorista: ");
//   int leu_certo = scanf( "%d", &nota);

//     if(leu_certo){
//       if (nota == 1) {
//         printf("A avaliação do seu motorista é de um desempenho ruim\n");
//       }
//       else if (nota == 2){
//         printf("A avalicação do seu motorista é de um desempenho insuficiente\n");
//       }
//       else if (nota == 3){
//         printf("A avaliação do seu motorista é de um desempenho suficiente\n");
//       }
//       else if (nota == 4){
//         printf("A avaliação do seu motorista é de um desempenho bom\n");
//       }
//       else if (nota == 5){
//         printf("A avaliação do seu motorista é de um desempenho ótimo\n");          
//       }
//       else {
//         printf("O valor inserido é inválido, insira um valor de 1 (ruim) a 5 (ótimo)\n");
//       }
//     }
  


//   return 0; 
//}

// versao do professor 
#include <stdio.h>
int main(){
int nota = 0;
  
printf("entre com uma nota entre 1 e 5: ");
int leu_certo = scanf("%i", &nota);

if(leu_certo){
  switch (nota){
    case 1: printf("Ruim\n");break;
    case 2: printf("Insuficiente\n"); break;
    case 3: printf("Suficiente\n"); break;
    case 4: printf("Bom\n"); break;
    case 5: printf("Otimo\n"); break;
    default: printf("Nota inválida\n"); break;
  }
//   if (nota == 1){
//  printf("Ruim\n");
// }
//   else if (nota==2){
// printf("Insuficiente\n");
// }
//   else if (nota ==3){
// printf("Suficiente\n");
// }
//   else if (nota==4){
// printf("Bom\n");
// }
//   else if (nota==5){
// printf("Otimo\n");
// }
//   else {printf("Nota inválida\n");}
 


else { prinf("Erro ao ler a nota, tente novamente\n");}

  return 0;
}


