#include <stdio.h>
#include <stdlib.h>

int main (void){ 

    float r, pi=3.14, area;

    printf(" Qual o raio do círculo? ");
    scanf("%f",&r);

    area = pi * r * r; 

    printf("A área do cículo com o raio escolhido é = %.2f m2 \n", area);

    //system("pause") não foi utilizado visto que estou utilizando uma distribuição do linux. 

    return 0;

}
