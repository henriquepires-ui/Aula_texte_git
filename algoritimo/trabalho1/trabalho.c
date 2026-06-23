#include <stdio.h>
#include <math.h>

// algoritimo para caulcular a area de um circulo dado raio
int main()

  { 
 // declaracao de variaveis
 
  float raio, area;
  
  // solicitar informacoes de usurio
  
  printf(" digite o valor do raio do circulo: ");
  scanf("%f", &raio);
  
  //executar operações
  
  area = M_PI * pow(raio, 2);
  
  // exubir as informacoes para usuario 
  
  printf("a area do circulo é: %.2f", area);
  
    return 0;
}