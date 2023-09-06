#include <sdio.h>

int main (){
    //operadores artimeticos + - x /
  int soma = 10 + 20;
  int subtracao =  soma - 5;
  int multiplicacao = soma * 2;
  inst divisao = soma / 2.0; //sem o ponto zero o código irá cortar as casas decimais 
  int resto = subtracao % 2;

  //operadores incremento/decremento 
  int pre_incremento = ++soma;
  int incremento = soma++; //soma +1
  int pre_decremento = --soma; 
  int decremento = soma--; //soma -1

  //operadores relacionais 
  int menor = 1 < 10;
  int menor = 1 <= 10;
  int maior = 1 > 10;
  int maior = 1 >= 10;
  int igual = 1 == 10;
  int diferente = 1 != 10;

  //operadores logicos 
  int e = 0 < 1 && 1 < 10; // 0 < 1 < 10(errado)
  int ou = 1 < 10 || 1 > 10 // 0 < 1 1 > 10
  int nao = !0; // !0 = 1, !1 = 0

  return 0;
}