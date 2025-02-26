#include <stdio.h>

int main() {
    int x;
    
    printf ("Digite o número:");
    scanf ("%d", &x);
    
    int divisao = x / 2;
    int resto = x % 2;
    
    printf("Divisao: %d\n", divisao);
    printf("Resto: %d\n", resto);

    if (resto == 0)
    {
        printf("Seu numero e Par \n");
    }
    
    if (resto != 0) 
    {
        printf ("Seu numero e Impar \n");
    }
    
    return 0;
}    