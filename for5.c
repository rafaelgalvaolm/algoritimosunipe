#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){ 
 
    int i; 
    int  soma_idade = 0, idades = 0, qtde = 0; 
    float media = 0; 

        printf("Quantas idades você quer digitar: ");
        scanf("%d",&qtde);
    
        for(i=1; i <= qtde; i++){ 

            printf("Digite a idade: ");
            scanf("%d",&idades);

            soma_idade = soma_idade + idades; 
        

        }

        media = soma_idade / qtde; 
        printf("A idade Media é: %f\n", media);

    return 0; 
}