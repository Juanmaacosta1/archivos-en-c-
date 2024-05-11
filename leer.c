#include <stdio.h>
int main (){
    FILE*pepe;
    pepe = fopen ("pepe.txt","w");
    if (pepe == NULL)
    {
        printf("su archivo no existe /n");
    return 1;

    }
    fprintf(pepe,"soy jn  ");

fclose(pepe);
}