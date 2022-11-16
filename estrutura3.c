#include <stdio.h>
#include <stdlib.h>

typedef struct animal{

char especie[50];
float peso; 
int qtdePata; 

}t_animal;


int main(int argc, char *argv[]) { 

t_animal animal1;
t_animal animal2;

printf("-------------------------------Primeiro animal-------------------------------\n");

printf("Digite a especie do animal : ");
scanf("%s", &animal1.especie);
printf("Digite o peso do animal: ");
scanf("%f", &animal1.peso);
printf("Digite a quantiadde de pata do animal: ");
scanf("%d", &animal1.qtdePata);


printf("-------------------------------Segundo animal-------------------------------\n");

printf("Digite a especie do animal : ");
scanf("%s", &animal2.especie);
printf("Digite o peso do animal: ");
scanf("%f", &animal2.peso);
printf("Digite a quantiadde de pata do animal: ");
scanf("%d", &animal2.qtdePata);


printf("-------------------------------Patas-------------------------------\n");



if(animal1.qtdePata > 3){ 
    printf("-------------------------------Primeiro animal-------------------------------\n");

    printf("A especie do animal é: %s\n", animal1.especie);
    printf("O peso do animal é: %f\n", animal1.peso);
    printf("A quantiadde de pata do animal é: %d\n", animal1.qtdePata);
}



if(animal2.qtdePata > 3){
printf("-------------------------------Segundo animal-------------------------------\n");
    printf("A especie do animal é: %s\n", animal2.especie);
    printf("O peso do animal é: %f\n", animal2.peso);
    printf("A quantiadde de pata do animal é: %d\n", animal2.qtdePata);

}

return 0;
}