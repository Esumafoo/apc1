#include <stdio.h>
#include <stdlib.h>

int main(){
  char opcao = 0;

  while(opcao != '0') {
    int ok = system("clear");
    printf("MENU PRINCIPAL\n ");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Lista de recardos\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção => ");
    int leu_certo = scanf("%c", opcao);
    getchar ();
    int ok = system("clear");

    switch (opcao){
      case '1' : printf ("Seu saldo é de R$ 0,00\n");break;
      case '2' : printf ("Escolha o valor de recarga \n"); break;
      case '3': printf("Escolha o valor de recarga\n");break;
      case '0' : break;
      default: printf ( "Opção inválida\n");break;
    }
    printf("Pressione ENTER");
    getchar();
    
  }
    



  return 0;
}