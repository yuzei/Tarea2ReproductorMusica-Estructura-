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
    int opcion;

    do{
        printf("       Gestionador de Musica de Rodolfo \n");
        printf("|---------------------------------------------|\n");
        printf("| 1.- Importar musica desde un archivo '.csv' |\n");
        printf("| 2.- Exportar musica a un '.csv'             |\n");
        printf("| 3.- Agregar album                           |\n");
        printf("| 4.- Agregar cancion                         |\n");
        printf("| 5.- Eliminar canciones de un artista        |\n");
        printf("| 6.- Buscar cancion                          |\n");
        printf("| 7.- Buscar canciones de un Artista          |\n");
        printf("| 8.- Buscar album                            |\n");
        printf("| 9.- Salir del Gestionador                   |\n");
        printf("|_____________________________________________|\n");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:
            
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        default : printf("Opcion Invalida! \n");
        }
    }while(opcion != 9);
    return 0;
}
