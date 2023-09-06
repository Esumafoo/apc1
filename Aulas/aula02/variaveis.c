#include <stdio.h>

int main(){
  //int x;
  int y = 0
  int z = 10
  int x1 = -1
  int x2 = x1

  y = 50
  char caracter = 0;//ou '\0','\n', '\t' //'a', 'b' ,'c', -128 a 127 --1 byte
//voce coloca um caracter na variavel para evitar lixo de memoria ram
  unsigned char caracter_sem_sinal; //0 a 255

  char _nome;

  char string [10] = "um texto"; 
  
  int inteiro; // -2147483648 a 2147483647 -- 4 bytes [verdadeiro ou falso ]

  unsigned int inteiro_sem_sinal; //00 a 4294967295

  short int interiro_curto; // -32768 a 32767 -- 2 bytes

  unsigned short int inteiro_curto_sem_sinal; // 0 a 65535

  long int inteiro_longo; // -9223372036854775808 a 9223372036854775807 -- 8 bytes

  unsigned long int inteiro_longo_sem_sinal;  
  
  float flutuante; // 0.123456f -- 4 bytes
  
  double duplo; // 0.123456789012345 -- 8 bytes
  
  void nada; // 1 byte

  return 0;
}