#include <stdio.h>
int main () {
    FILE *dato;
    dato  = fopen ("Datos.txt", "r");

if (dato == NULL){
printf("no se pudo abrir el arvhivo" );
return 1;
}
int leer ;
while ((leer = fgetc(dato)) !=EOF) 
{
    printf("%c", leer);
    
}

fclose(dato);
}
