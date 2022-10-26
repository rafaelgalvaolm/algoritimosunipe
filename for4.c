#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){ 
 
    int i; 
        for (i=1; i<=3; i++){ 
            float num1, num2, num3, media;

             printf("Digite o valor do primeiro número: ");
                scanf("%f",&num1);

            printf("Digite o valor do segundo número: ");
                scanf("%f",&num2);

            printf("Digite o valor do terceiro número: ");
                scanf("%f",&num3);


             media = (num1 + num2 + num3) / 3;
             
             printf("A média dos números digitados é = %.1f\n", media);
        }

            

    return 0; 
}