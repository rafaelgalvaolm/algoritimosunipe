int main () { 
    int x = 15; 
    int y; 
    int *p;


    p = &x; 
    y = *p; 

    printf(" endereco de x = %p \n", p);
    printf("valor apontado por p = %d \n", *p);
    printf("valor apontado por y = %d \n", y);


return 0;
}