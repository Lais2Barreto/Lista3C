#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int aux = 1;
    int contador = 0;
    char palavra [50]; 
    printf("E palindromo?\n\n");
    printf("Digite uma palavra:\n");
    scanf("%s", &palavra);

    for(int i = strlen(palavra)-1; i >= 0; i--){
      if(tolower(palavra[contador]) != tolower(palavra[i])){
        aux = 0;
        break;
      }
      contador += 1;
    }

    if(aux == 1){
      printf("E um palindromo!\n");
    }else printf("Nao e um palindromo\n");

    return 0;
}