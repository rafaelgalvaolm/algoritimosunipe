#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int i = 0; 
    int vet[qtd];
    int soma = 0;
    int media = 0;
    int qtd = 0;

    printf("Quantas idades você quer digitar: ");
    scanf("%d", &qtd); 


    for(i = 0; i < qtd; i++){ 
        printf("Digite uma idade para eu salvar no meu vetor: ");
        scanf("%d", &vet[i]);

        soma += vet[i]; 
    }


    media = soma / qtd; 

    printf("A média das idades indicadas é : %d", media); 


    return 0; 

}