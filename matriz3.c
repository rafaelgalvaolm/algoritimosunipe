#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ 
 
 int matriz [4][4]; 

 int i = 0;
 int c = 0;
 int soma = 0;

    for(i = 0; 1 < 4; i++){
        for(c = 0; c < 4; c++){

            soma+= matriz[1][3];

        }
    }

    for(i = 0; i < 4; i++){ 
        for(c = 0; c < 4; c++){ 
            
            if(i == c){
                printf("%d", matriz[i][c])
            }
        }
    }


    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[0][0]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[0][1]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[0][2]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[1][0]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[1][1]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[1][2]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[2][0]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[2][1]);
    printf("insira o valor que gostaria de colocar na area da matriz");
    scanf("%d", &matriz[2][2]);


 

    printf("%d -%d - %d" \n",matriz[0][0],matriz[0][1],matriz[0][2]);
    printf("%d -%d - %d" \n",matriz[1][0],matriz[1][1],matriz[1][2]);
    printf("%d -%d - %d" \n",matriz[2][0],matriz[2][1],matriz[2][2]);




    return 0; 
}