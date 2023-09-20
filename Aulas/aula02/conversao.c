#include <stdio.h>

int main (){
  char caracter = 127; //ocupa 1 bit
  int inteiro = caracter; //ocupa 1 bit de 4 bites (conversao implicita)
  float flutuante = inteiro; //tbm conversao implicita mas tomar cuidado com as casas decimais
  double duplo = flutuante; //tbm conversao implicita

  printf("o caracter %d convertido para inteiro %d\n", caracter, inteiro);
  printf ("o inteiro %d convertido para flutuante %f\n", inteiro, flutuante);
  printf ("o flutuante %f convertido para duplo %f\n", flutuante, duplo);

  duplo = 270.123456;
  flutuante = (float) duplo; //conversao explicita (vc obriga o computador a fazer a conversão msm que não caiba um no outro)
  inteiro = (int) flutuante; //conversao explicita
  caracter = (char) inteiro; //conversao explicita 

  printf("o duplo %f convertido para flutuante %f\n", duplo, flutuante);
  printf("o flutuante %f convertido para inteiro %d\n", flutuante, inteiro);
  printf("o inteiro %d convertido para caracter %d\n", inteiro, caracter);

  return 0;
}