#include <stdio.h>

int main(){
    char array1[50];
    char array2[50];
    int i, j;
    puts("Digite o primeiro texto: ");
    gets(array1);
    puts("Digite o segundo texto: ");
    gets(array2);

    for (i = 0; array1[i] != '\0'; ++i);
    for (j = 0; array2[j] != '\0'; ++j, ++i) {
      array1[i] = array2[j];
           
    }
    array1[i] = '\0';
    
    puts(array1);
    return 0;
}