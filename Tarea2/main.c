/*
    Roberto Isla & Matias Garcia
    20.184.001-5 &
*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "hash.h"
#include <stdbool.h>

typedef struct{
    char nombreArtista[101];
    List *Albums;
    List *Canciones;
    
} Artista;

typedef struct{
    char nombreAlbum[201];
    char nombreArtista[101];
    char generoAlbum[101];
    int fechaAlbum;
    List *Canciones;

} Album;

typedef struct{
    char nombreCancion[101];
    char nombreAlbum[102];
    char nombreArtista[101];
    char genero[101];
    int duracion;               //En segundos;
} Cancion;

int main()
{
    //Ht
    //Ht
    //Ht
    char album[201];
    char artista[101];
    char cancion[101];
    int minutos;
    int segundos;
  typedef struct{ //
	char nombre_album[];
	char nombre_cancion[];
	char autor[];
	char duracion[];
}Album;//estructura para la lectura de csv

typedef struct{
	char nombre[];
	char autor[];
	char duracion[];
}cancion;

typedef struct{
	char autor[];
	list * canciones;
}artista;
//-----------------------------------------------------------------------------------------
int op;
char linea[1024];
FILE * fp = fopen("canciones.csv","r");
FILE * fp = fopen("canciones1.csv","w");
    
printf("                             MENU\n");
printf("                        1- Importar musica\n");
printf("                        2- Exportar musica\n");
printf("                        3- Agregar Album\n");
printf("                        4- eliminar artista\n");
printf("                        5- buscar cancion\n");
printf("                        6- buscar artista\n");
printf("                        7- buscar album \n");
printf("         ingrese opcion: ");
scanf("%d",&op);
    switch(op){
	case 1:
            while(fgets (linea, 1023, fp) != NULL) {
           strcpy(nombre, strtok(linea,","));
           strcpy( , strtok(, ","));
           strcpy( , strtok(, ",")));
           list_push_back (, );
           = malloc(sizeof());
        }

	
	break;
	case 2:
	    
	break;
	case 3:
		printf("ingrese nombre del album\n");
		scanf("%s",&nombre);
		if(){//se busca si el album existe:
		//si es asi
			printf("el album ya existe\n");
			do{
				printf("desea agregarle canciones? 0-si, 1-no\n");
				scanf("%d",&resp);
				if(resp==0){
					ingrese los sgtes datos:\n
					titulo
					scanf("%s",&titulo);
					artista
					scanf("%s",&);
				}
			}while(resp == 1)
		else//sino existe
		
	break;
	case 4:
	
	break;
	case 5:
	
	break;
	case 6:
	
	break;
	case 7:
	
	break;
	}
