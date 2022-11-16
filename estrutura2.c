#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{ 
    int rgm; 
    char nome[50];
    int cpf; 
    int turma; 
    
}t_aluno;


int main(int argc, char *argv[]) {

    t_aluno aluno1;
    t_aluno aluno2; 

int count = 0;
printf("-------------------------------Primeiro aluno-------------------------------\n");

    printf("Digite seu rgm: ");
    scanf("%d", &aluno1.rgm);
    printf("Digite seu nome: ");
    scanf("%s", aluno1.nome);
    printf("Digite seu cpf: ");
    scanf("%d", &aluno1.cpf);
    printf("digite sua turma: ");
    scanf("%d", &aluno1.turma);

    printf("Seu rgm é: %d\n", aluno1.rgm); 
    printf("Seu nome é: %s\n", aluno1.nome); 
    printf("Seu cpf é: %d\n", aluno1.cpf); 
    printf("Seu turma é: %d\n", aluno1.turma);

printf("-------------------------------Segundo aluno-------------------------------\n");

    printf("Digite seu rgm: ");
    scanf("%d", &aluno2.rgm);
    printf("Digite seu nome: ");
    scanf("%s", aluno2.nome);
    printf("Digite seu cpf: ");
    scanf("%d", &aluno2.cpf);
    printf("digite sua turma: ");
    scanf("%d", &aluno2.turma);

    printf("Seu rgm é: %d\n", aluno2.rgm); 
    printf("Seu nome é: %s\n", aluno2.nome); 
    printf("Seu cpf é: %d\n", aluno2.cpf); 
    printf("Seu turma é: %d\n", aluno2.turma);

printf("-------------------------------Contagem da turma-------------------------------\n");


if(aluno1.turma == 0){ 
    count++;
}

if(aluno2.turma == 0){
    count++;
} 

printf("os alunos pertecentes à turma 0 são:  %d\n", count);

    return 0; 

 };
