#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char procesador[20];
    char marca[20];
    float precio;
}E;

float calcularIva(float precio){
    return precio*.21;
}

int reemplazarCaracter(char[] cadena, char caracter, char nuevoCaracter){
    int cantidadReemplazos = 0;
    for(int i=0;i<strlen(cadena);i++){
        if(strcmp(cadena[i],caracter)==0)
        {
            cantidadReemplazos--;
        }
        if(strcmp(cadena[i],nuevoCaracter)==0)
        {
            cantidadReemplazos++;
        }
    }
    return cantidadReemplazos;
}


int main()
{

    return 0;
}
