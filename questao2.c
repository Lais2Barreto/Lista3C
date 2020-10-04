#include <stdio.h>

int main(){
    char array1[50];
    char array2[50];
    int i;
    printf("Digite o primeiro texto: ");
    scanf("%s", array1);
    printf("Digite o segundo texto: ");
    scanf("%s", array2);

    for (i = 0; i < 50; i++){
        if (array1[i] == '\0'){
            if (array2[i] == '\0'){
                break;
            }
            printf("Sao diferentes.");
            return 0;
        }
        if(array1[i] != array2[i]){
            printf("Sao diferentes.");
            return 0;
        }
    }
    printf("Sao iguais!");
    return 0;
}