#include <stdio.h>
#include <stdlib.h>

int main (void){ 
    int n; 

    printf("Ditige um número inteiro: ");
    scanf("%d",&n);

    printf("\nO numero antecessor de %d = %d", n, (n-1));
    printf("\nO numero sucessor de %d = %d\n", n, (n+1));

    //system("pause") não foi utilizado visto que etou utilizando uma distribuição do linux. 

    return 0; 


}
