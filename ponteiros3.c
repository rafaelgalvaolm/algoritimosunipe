int main() { 

   int x = 15; 
    int y; 
    int *p;
    int tamanho;




    p = &x; 
    y = *p; 

    printf(" endereco de x = %p \n", p);
    printf("valor apontado por p = %d \n", *p);
    printf("valor apontado por y = %d \n", y);


    tamanho = sizeof(int);
    printf("%d\n", tamanho); 
    tamanho = sizeof(double);
    printf("%d\n", tamanho);



 return 0;
}