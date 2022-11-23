#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){ 
    return x+y; 
}

int sub(int x, int y){ 
    return x-y; 
}

int mul(int x, int y){ 
    return x*y;
}

int dividir(int x, int y){ 
    return x/y;
} 

int main(int argc, char *argv[]){

    int num1, num2; 
    int resultado_soma = 0; 
    int resultado_sub = 0; 
    int resultado_mul = 0; 
    int resultado_dividir = 0;
    

    printf("Insira o num1: ");
    scanf("%d", &num1);
    printf("Insira o num2: ");
    scanf("%d", &num2);

    resultado_soma = soma(num1, num2);
    resultado_sub = sub(num1, num2);
    resultado_mul = mul(num1, num2);
    resultado_dividir = dividir(num1, num2);

    printf("\nSoma: %d", resultado_soma);
    printf("Resultado da soma é: %d\n", soma(num1, num2));
    printf("\nSub: %d", resultado_sub);
    printf("Resultado da sub é: %d\n", sub(num1, num2));
    printf("\nmul: %d", resultado_mul);
    printf("Resultado da mul é: %d\n", mul(num1,num2)); 
    printf("\ndividir: %d", resultado_dividir);
    printf("Resultado da dividir é: %d\n", dividir(num1,num2));

return 0;

}
