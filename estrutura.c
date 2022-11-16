#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{ 

    int cpf;
    float peso;
    char nome[50];

}t_pessoa;

int main(int argc, char *argv[]) { 
     t_pessoa p1;

     printf("Digite seu cpf: ");
     scanf("%d",p1.cpf);
     printf("Digite seu peso: ");
     scanf("%f",p1.peso);
     printf("Digite seu nome: ");
     scanf("%s",p1.nome);

printf("O seu cpf é: %d", p1.cpf);
printf("O seu peso é: %f", p1.peso);
printf("O seu nome é: %s", p1.nome);

return 0;

}


