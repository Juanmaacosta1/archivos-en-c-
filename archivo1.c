#include <stdio.h>
int main (int argc ,char *argv[]){
if (argc !=2 ){
    printf ("uso: %s <miarchivo>", argv[0]);
    return 1;
}
char *miarchivo = argv[1];
FILE*jn;
jn = fopen(miarchivo,"r");
if (jn == NULL)
{
 printf("no existe  ", miarchivo);
 return 1;

}
char carac;
while ((carac = fgetc(jn )) !=EOF)
{
    printf("%c",carac);
}

fclose(jn);
return 0;

}