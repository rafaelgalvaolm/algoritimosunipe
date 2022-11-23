#include <stdio.h>
#include <stdlib.h>

int salario(int x, int y){ 
    return x*y;
}

int main(){
    int n1, n2;

    printf("Digite o numero de horas trabalhadas.\n");
    scanf("%d", &n1);
    printf("Digite o valor de 1 hora: \n");
    scanf("%d", &n2);


    printf(" Voce ira receber: %d\n", salario(n1,n2));
    

    return 0;
}