#include <stdio.h>
#include <stdlib.h>

int main (void){ 

    float C, F; 

    printf("Coloque a temperatura em Celsius a ser convertida: ");
    scanf("%f",&C);

    F = (C * 9 / 5) + 32; 

    printf("%.2f Celsius = %.2f Fahrenheit\n", C, F);

    //system("pause") não foi utilizado visto que etou utilizando uma distribuição do linux. 
    return 0;


}