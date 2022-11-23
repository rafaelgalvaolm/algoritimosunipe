#include <stdio.h>
#include <stdlib.h>

int main() { 

    int tam, i; 

    printf("digite o tamanho do seu vetor:\n");
    scanf("%d", tam); 

    int * vet; 

    vet = (int *) malloc(sizeof(int)*tam);

    for (i = 0; i<tam; i++) { 

        printf("digite o numero de %d\n", i++); 
        scanf("%d", &vet[i]);

    }


    printf("os %d numeros digitados foram:\n", tam); 
    for (i = 0; i<tam; i++) { 

        printf("digite o numero de %d\n", vet[i]); 

    }

    free(vet);
    return 0;
}