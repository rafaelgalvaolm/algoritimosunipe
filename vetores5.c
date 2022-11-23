#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int i = 0; 
    float notas1[3];
    float notas2[3]; 
    float notas3[3]; 
    float media[3]; 



    for(i = 0; i < 3; i++){ 
        printf("Digite a nota 1: ");
        scanf("%f", &notas1[i]);
    }

    for(i = 0; i < 3; i++){ 
        printf("Digite a nota 2: ");
        scanf("%f", &notas2[i]);
    }


    for(i = 0; i < 3; i++){ 
        printf("Digite a nota 3: ");
        scanf("%f", &notas3[i]);
    }


    media[0] = {notas1[0] + notas2[0] + notas3[0]}/3;
    media[1] = {notas1[1] + notas2[1] + notas3[1]}/3;
    media[2] = {notas1[2] + notas2[2] + notas3[2]}/3;


    printf("A média do aluno 1 é %f: ", media[0]);
    printf("A média do aluno 2 é %f: ", media[1]);
    printf("A média do aluno 3 é %f: ", media[2]);





return 0;
}