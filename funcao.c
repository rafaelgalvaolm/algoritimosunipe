#include <stdio.h>
#include <string.h>

int soma(int x, int y){ 
    return x+y; 
}


 int main(int argc, char *argv[]){

    int num1, num2; 
    int resultado = 0; 

    printf("Insira o num1: ");
    scanf("%d", &num1);
    printf("Insira o num2: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);
    
    printf("Resultado: %d\n", resultado);
    printf("Resultado da soma é: %d\n", soma(num1, num2));

return 0;
 }