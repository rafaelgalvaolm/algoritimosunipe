#include <stdio.h>
#include <stdlib.h>


void idade(int x){ 
    if(x >= 18){ 
        printf("Maior de Idade");
    }else{ 
        printf("Menor de Idade");
    }

}

int main(){

    int id;

    printf("Insira a idade: ");
    scanf("%d", &id);


    idade(id);

  
return 0;

}