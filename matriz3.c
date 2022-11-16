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

    for(i = 0; i < 4; i++){
        for(c = 0; c < 4; c++){ 

            if (matriz[i][c] >= 15 && matriz[i][c] < = 35){
                count++; 
            }
        }
    }


    return 0; 
}
