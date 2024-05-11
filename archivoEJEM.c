#include <stdio.h>//bibliotecas 
#include <unistd.h>//bibliotecas 
#define FILENAME "pidfile"//defino el nombre del archivo 

int main () {
    //crear un archivo para leer 

    FILE*fil;//creo un archivo 

    fil = fopen (FILENAME,"r");//llamo al arhivo creado y lo abro (r) dependiendo como quiero abrir el arhivo 

//creo un iterador if para verificar si se abrio correctamente 
    if (fil !=NULL)
    {
        fclose(fil);///lo cierro 
        
        printf("ya esta enejecucuion :  \n");// muestro un mensaje en pantalla  que esta en ejecucion 
         //en caso que ya se este ejecuntado devuelvo 1 ala funcion para cerrar el programa 
        return 1;

    }

    //en caso de que el arhicvo exista hay que crealo

    fil = fopen (FILENAME,"w");
    if (fil == NULL)
    {
        printf("eror al crear este arhivo \n");
        return 1;

    }

 //obtener el pid del proceso para eso se utiliza la biblioteca unistd.h
int pid = getpid();
//escribir el pid en el Arhivo 
fprintf(fil, "%d", pid );
fclose(fil);//cierra el archivo 

//muestro el pid 
printf ( "el pid es :%d");

//muestro un mensaje en pantalla 
printf("presione cualqier tecla para cerrar y borrar el arhivo :");
//guarda cualqier tecla presionada 
getchar();

//borra el archivo creado en el inicio 
remove(FILENAME);


return 0;
}