#include <stdio.h>//bibliotecas 


int main () {
    //creo un archivo llamado sumas 
    FILE*sumas;

    //llamo al arhivo de texto y (r+) es el modo en el que lo abro 
    sumas = fopen ("suma.txt","r+");
    
    //uso de if para verificar si abre bien el archivo 
    if (sumas ==NULL)
    {
        //en caso de que devuelve nul imprime el siguiente mensaje 
        printf("no hay archivos /n");
        //devuelve y cierra el programa 
        return 1;
    }

    //creo un acumulador y otra variable para devolver un valor 
    int suma = 0;
    int numero ;

    //creo un while para leer los arhivos 

    while (fscanf(sumas, "%d", &numero) != EOF)
    {
        //suma los numeros 
        suma += numero;
    }
    fseek(sumas, 0, SEEK_SET);
    
    fprintf(sumas, "La suma de los números es: %d", suma);

    fclose(sumas);

    return 0;
}