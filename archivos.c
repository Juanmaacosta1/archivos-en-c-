#include <stdio.h>

int main() {
    FILE *archivo;
    char texto[100];
    
    // Abrir un archivo para escribir
    archivo = fopen("mi_archivo.txt", "w");
    
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    
    // Escribir datos en el archivo
    fprintf(archivo, "Hola, este es un ejemplo de archivo en C.\n");
    fprintf(archivo, "Puedes escribir más líneas si lo deseas.\n");
    
    // Cerrar el archivo
    fclose(archivo);
    
    // Abrir el archivo para lectura
    archivo = fopen("mi_archivo.txt", "r");
    
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para lectura.\n");
        return 1;
    }
    
    // Leer y mostrar los datos del archivo
    printf("Contenido del archivo:\n");
    while (fgets(texto, sizeof(texto), archivo) != NULL) {
        printf("%s", texto);
    }
    
    // Cerrar el archivo de lectura
    fclose(archivo);
    
    return 0;
}
