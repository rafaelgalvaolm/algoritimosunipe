#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa { 

    char nome [50];
    int cpf; 
    int idade; 
    float salario; 
    
}t_pessoa

int main(int argc, char *argv[]){

 t_pessoa pessoa[10]
 count = 0;

for(int i = 0; i < 11; i++){ 

    printf("Digite o Nome da pessoa: ");
    scanf("%s", &pessoa[i].nome);
    printf("Digite o cpf da pessoa: ");
    scanf("%d", &pessoa[i].cpf); 
    printf("Digite a idade : ");
    scanf("%d", &pessoa[i].idade);
    printf("Digite a salario : ");
    scanf("%f", &pessoa[i].salario);

if(pessoa[i].salario >= 3.500 && pessoa[i].salario <= 4.500){
    count++;
}

}

    printf("%d pessoas que recebem entre 3500 e 4500 são: \n", count);

return 0;
} 