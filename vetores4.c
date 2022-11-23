#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

        int i = 0; 
        int vet[15]; 
        int Pares = 0;
        int Impares = 0;

        
        for(i = 0; i < 15; i++){ 
        printf("Digite um número inteiro para eu salvar no meu vetor: ");
        scanf("%d", &vet[i]);

        if (vet[i] == 0){ 
            Zeros++; 
        }else if (vet[i]%2==0){ 
            Pares++;
        }else{ 
            Impares++
        }
    }


    printf("pares %d\n", pares); 
    printf("impares %d\n", impares);
    printf("Zeros %d", zeros); 
 

    return 0; 

}