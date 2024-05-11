#include <stdio.h>
int main () {
    char pepe; //define de tipo caracter 

    FILE*hola; // crea un archivo
    hola = fopen ("tp6.c","r"); // abro el archivo de solo lectura

    // Si el archivo es igual a NULL imprime por pantalla
    if (hola == NULL){ 
        printf("no hay archivos :\n");
        return 1;
    }

    // Recorre todo el archivo e imprime todo el codigo fuente de .c
    while ((pepe = fgetc (hola)) != EOF)
    {
        printf("%c",pepe);
    }
    
    fclose(hola); // cierra el archivo 

    return 0;
}
