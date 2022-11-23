#include <stdio.h>
#include <stdlib.h>


void par(int i){ 
    if(i%2 == 0){ 
        printf(" Par");
    }else{ 
        printf("Impar");
    }

}

int main(int argc, char *argv[]){

    int num1;

    printf("Insira o num1: ");
    scanf("%d", &num1);


    par(num1);

  
return 0;

}