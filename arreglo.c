#include <stdio.h>
int main () {
int arr[20];
int total;
int sumatotal = 0;
int i,j;
    FILE*arreglos;
    arreglos= fopen ("arreglos.txt","r");
    if (arreglos==NULL)
    {
        printf("no se puede porque no esta ");
        return 1;
    }

    fscanf(arreglos ,"%d" ,&total);

    for ( i=0 ; i < total; i++)
    {
        fscanf(arreglos ,"%d" ,&arr[i]);
        sumatotal+=arr[i];
    }

    fclose(arreglos);

    for (j  = 0; j < total; j++)
    {
        printf(" %d\n",arr[j]);
    }
    printf("cantidad de elementos: %D\n",total);
    printf("\n la suma es %d",sumatotal);
return 0;

}