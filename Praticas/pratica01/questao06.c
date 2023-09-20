// Faça um programa em C que calcule as raízes de uma equeção de segundo grau através da fórmula de Bhaskara (-b +/- raiz quadrada de b ao quadrado.-4ac)/2a).

// #include <stdio.h>
// #include <math.h>

// int main(){

// int a = 1;
// int b = 3;
// int c = 2;

//  const int delta = b * b - 4*a*c;
//  int x1 = (-b + sqrt(delta)) / (2*a);
//  int x2 = (-b - sqrt(delta)) / (2*a);
 
//  // Imprime os resultados

//  printf("O valor de x1: %d\n", x1);
//  printf("O valor de x2: %d\n", x2);
//    return 0;
//  }

// versão do professor
#include <stdio.h>
#include <math.h>

int main(){
  int coeficiente_a = 1;
  int coeficiente_b = 3;
  int coeficiente_c = 2;

  double delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;

  double raiz_x1 = (-coeficiente_b + sqrt(delta)) / 2 * coeficiente_a;
  double raiz_x2 = (-coeficiente_b - sqrt(delta)) / 2 * coeficiente_a;

  printf("as raizes da qeuacao %ix² %ix %i são %.f e %.f\n", coeficiente_a, coeficiente_b, coeficiente_c, raiz_x1, raiz_x2);

return 0;
}