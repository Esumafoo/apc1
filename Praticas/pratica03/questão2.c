// Faça um prorama em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.

#include <stdio.h>

int main(){
  float numero = 0.0f;
  float desconto = 0.0f;
  printf ("Entre com o valor bruto:");
  float leu_certo = scanf( "%f", &numero);

  if (leu_certo == 1){

    if (numero <= 100){
      printf ("Valor bruto: %.2f\n", numero);
      printf("Valor bruto com desconto de 1%%: %.2f\n", numero * 0.99);}
     else if (numero > 100 && numero <= 500){
      printf ("Valor bruto: %.2f\n", numero);
      printf("Valor bruto com desconto de 5%%: %.2f\n", numero * 0.95);}
     else if (numero > 500){
      printf ("Valor bruto: %.2f\n", numero);
      printf("Valor bruto com desconto de 10%%: %.2f\n", numero * 0.90);} else { printf("Nao eh um valor ponto flutuante. Tente novamente!\n");}
  }
  


  return 0;
}


/* int main(){
  float valor_bruto = 0.0f;
  float valor_desconto = 0.0f;

  print("Entre com o valor bruto:");
  scanf ( "%f", &valor_bruto);

  if (valor_bruto <= 100){
  valor_desconto = valor_bruto * 0.01f;
  }

  else if (valor_bruto>100.0f && valor_bruto<=500.0f){
  valor_desconto = valor_bruto* 0.05f;
  }

  else if (valor_bruto>500.0f){
  valor_desconto = valor_bruto  0.01f;
    }
  printf ("Valor bruto: %.2f\n", valor_bruto);
  printf (Valor desconto: %.2f\n", valor_desconto);
  return 0;
}*/