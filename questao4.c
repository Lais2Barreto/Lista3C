#include <stdio.h>

int main(void) {
  char palavra[50];
  puts("Entre com uma palavra: ");
  gets(palavra);

  int cont = 0;

  while(palavra[cont] != 0){
    printf("%c", palavra[cont]);
    cont += 1;
  }

  printf("\n%d", cont);
  return 0;
}