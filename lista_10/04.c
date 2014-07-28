/*
4. Um determinado material perde metade de sua massa a cada com
um período fixo, dependendo das condições ambientais. Escreva
um algoritmo que calcule o tempo em que a massa de do material
fique menor do que 1g. O algoritmo recebe como parâmetros a
massa inicial e o tempo em que o material perde metade de sua
massa. Determine a equação de tempo de execução do algoritmo e
faça um gráfico para verificar se a equação está correta.
*/

#include <stdio.h>

int halfLife(float mass) {
  int i;

  while (mass > 1) { 
    mass = mass/2; // divisão e atribuição = x vezes
    i++; // incremento e atribuição = x vezes
  }

  return i;
}

void time(int t_halfLife) {
  int t_total;

  t_total = 50*t_total; 

  printf("O tempo decorrido é:\n%02d:%02d:%02d\n", t_total/3600, (t_total%3600)/60, t_total%60);
}


int main(int argc, char **argv) {
  float mass, t_halfLife;

  printf("Digite o valor da massa. e o tempo de meia vida do material\n");
  scanf("%f %f ", &mass, &t_halfLife);

  time(halfLife(mass));
  
  return 0;
  
  }


  /*
  O tempo de execução dependerá do tamanho da massa, e será de complexidade O(log(n))
  porque nesse caso, a massa será dividida por 2 x vezes de modo que:
  sendo a base 2

  log(massa) = x
  2^x = massa
  
  */