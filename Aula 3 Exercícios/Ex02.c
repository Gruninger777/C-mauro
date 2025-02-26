#include <stdio.h>
int main () {
    int primeiro;
    int segundo;

    printf("Digite o primeiro:");
    scanf("%d", &primeiro);

    printf("Digite o segundo:");
    scanf("%d", &segundo);
    
    if(primeiro > segundo){    
        printf("Maior: %d\n", primeiro);
        printf("Menor: %d\n", segundo);
    };

    if(segundo > primeiro){
        printf("Maior: %d\n", segundo);
        printf("Menor: %d\n", primeiro);
    };

    if(primeiro == segundo){
        printf("Igual: %d\n", segundo);
    };

 return 0;
} 