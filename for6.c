#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){ 
 
    int i, num = 0, count = 0; 



        for(i=1; i<=10; i++){ 

            printf("Digite um número: ");
            scanf("%d",&num);

            if(num >= 10 && num <= 35){ 
                count = count + 1;
            }
            
                printf(" \n %d", count); 
        }


            

    return 0; 
}