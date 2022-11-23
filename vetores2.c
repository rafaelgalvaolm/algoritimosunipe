#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int i = 0; 
    int vet[10];

    for(i = 0; i < 10; i++){ 
        printf("Digite um número para eu salvar no meu vetor: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){ 
        printf("%d \t", vet[i]); 
    }


    return 0; 

}