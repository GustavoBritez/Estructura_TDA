#include <stdio.h>
#include <stdlib.h>
#include "Equipo.h"

void cargar_Cargar( int vecto[ ]);


int main()
{
    Equipo e1 = Crear_Equipo();

    Mostrar_Equipo_Completo( e1 );

    Cargar_Nombre_Equipo (e1);


    Cargar__Todos_Los_Jugadores(e1);
    Mostrar_Equipo_Completo(e1);


    Cargar_Jugador_Especifico(e1);
    Mostrar_Equipo_Completo(e1);


    Eliminar_Jugador(e1);
    Mostrar_Equipo_Completo(e1);

/// Descomentar para que funcione y elimine todos los jugadores del equipo
    /*Eliminar_Todos_Los_Jugadores(e1);
    Mostrar_Equipo_Completo(e1);*/

    /// EXPLICACION DE GETTER;
    int posicion;

    printf("\n Ingrese una posicion de jugador del equipo %s \n", Obtener_Equipo(e1));
    scanf("%d", &posicion);

    char* Nombre_Obtenido = Obtener_Jugador(e1, posicion);

    printf("\n %s", Nombre_Obtenido);

    /// Liberador de memoria
    free(e1);

    return 0;
}





