#include <stdio.h>
#include <stdlib.h>
#include "Equipo.h"
#define TAM 5
struct Estructura_Equipo
{
    char Nombre[30];
    char jugadores[5][30];
};

/// Cuando se crea la estructura, no recibe nada por parametro
/// Pero se crea una estructura con Nombre = " Default "
/// Y creamos una funcion para cargar los jugadores como "Default"
Equipo Crear_Equipo()
{
    Equipo e = malloc(sizeof( struct Estructura_Equipo ));
    strcpy( e->Nombre ,"Default");
    Cargar_Jugadores_Default(e);
    return e;
}
Equipo Crear_Estructura_Equipo( char nombre[30] )
{
    Equipo e = malloc(sizeof(struct Estructura_Equipo));
    strcpy(e->Nombre , nombre);
    Cargar_Jugadores_Default(e);
    return e;
}

/// Las funciones tienen una firma y un cuerpo.
/// Tipo |Firma de la funcion      | Parametro
    void   Cargar_Jugadores_Default( Equipo e )
{
    for ( int i = 0 ; i <  TAM -1 ; i++)
    {
        strcpy(e->jugadores[i],"Default");
    }
    // Explicacion de este algoritmo
 /// Cargamos todos los jugadores con la palabra "Default"
 /// Esto es importante hacerlo siempre para evitar errores inesperados al momento de trabajar con
 /// La estructura.

/// Vista previa de este algoritmo
/// F[5]  Largo de Columna [30]
/// 1.          Default
/// 2.          Default
/// 3.          Default
/// 4.          Default
/// 5.          Default
}

void Mostrar_Equipo_Completo( Equipo e )
{
    printf("\n | Nombre de Equipo %s \n", e->Nombre);
    for( int i = 0 ; i < TAM-1 ; i++)
    {
        printf(" | - %s \n",e->jugadores[i]);
    }
    //Explicacion de este algoritmo
/// Mostramos los jugadores uno por uno
}


//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------

void Cargar_Nombre_Equipo (Equipo e)
{
    char Nombre[30];
    printf("\n Funcion CARGAR NOMBRE DE EQUIPO \n");
    printf("\n | Ingrese Nombre del equipo ");
    scanf("%s", Nombre);

    strcpy(e->Nombre, Nombre);
}

void Cargar__Todos_Los_Jugadores( Equipo e )
{
    char Nombre[30];
    for( int i = 0 ; i < TAM-1 ; i++)
    {
        printf("\n Funcion CARGAR TODOS LOS JUGADORES \n");
        printf("\n Ingrese nombre del jugador \n");
        fflush(stdin);
        scanf("%29s", Nombre);

        strcpy(e->jugadores[i], Nombre);
    }
    // Explicacion de este algoritmo
/// Cargamos las posiciones de jugadores una por una
}

void Cargar_Jugador_Especifico( Equipo e )
{
    int numero;
    char Name[30];
    printf("\n Funcion CARGAR JUGADOR ESPECIFICO \n");
    printf("\n | ---- Ingrese un numero de jugador --- |");
    scanf("%d", &numero);

    while( numero > 3 || numero < 0)
    {
        printf("\n |      ERROR|");
        printf("\n | ---- Ingrese un numero de jugador --- |");
        scanf("%d", &numero);
    }
    printf("\n |      Exitoso|");
    printf("\n | ---- Ingrese un Nombre de jugador --- |");
    scanf("%29s", Name);

    strcpy(e->jugadores[numero], Name );
        // Explicacion de este algoritmo
/// Cargamos un jugador en una posicion especifica
}

void Eliminar_Jugador( Equipo e )
{
    int numero;
    char Name[30];
    printf("\n Funcion ELIMINAR JUGADOR ESPECIFICO \n");
    printf("\n | ---- Ingrese un numero de jugador --- |");
    scanf("%d", &numero);

    while( numero > 3 || numero < 0)
    {
        printf("\n |      ERROR|");
        printf("\n | ---- Ingrese un numero de jugador --- |");
        scanf("%d", &numero);
    }
    strcpy(e->jugadores[numero],"Eliminado");
            // Explicacion de este algoritmo
/// Eliminamos un jugador especifico, primero pedimos el numero de jugador y verificamos que este
/// Dentro de los rangos permitidos para evitar que nos tire error.
/// Luego reemplazamos el numero ingresado por la palabra Eliminado.
}

void Eliminar_Todos_Los_Jugadores( Equipo e)
{
    printf("\n Funcion ELIMINAR TODOS LOS JUGADORES \n");
    for( int i = 0 ; i < TAM - 1 ; i++)
    {
        strcpy(e->jugadores[i], "Eliminado");
    }
    // Explicacion de este algoritmo
/// Eliminamos todos los jugadores, recorriendo con un FOR la matriz Jugadores, en este caso
/// Usamos un solo FOR, por que queremos solo recorrer la Fila de 0 a 4  Jugadores[5][30];
}

/// ---------- Getters

char* Obtener_Jugador(Equipo e , int posicion )
{
    return e->jugadores[posicion];
}

/// Como se puede observar, necesitamos siempre apuntar un puntero del tipo de funcion al nombre de la funcion
char* Obtener_Equipo(Equipo e)
{
    return e->Nombre;
}
