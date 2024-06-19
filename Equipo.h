#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
struct Estructura_Equipo;
typedef struct Estructura_Equipo * Equipo;

///Que es una PreCondicion ? Establece las condiciones necesarias para la ejecucion de la funcion
///Que es una PostCondicion ? Establece las propiedades que garantiza la ejecucion de la funcion

/// Getters ( Permite obtener el dato de la estructura )
/// Setters ( Permite modificar o asignar un dato de la estructura )

///                                  Funciones Basicas de un TDA

///PreCondiciones -> Definir la estructura Equipo n en el main
///PostCondiciones -> Crea una estructura con una interfaz base " Default "
Equipo Crear_Equipo();

///PreCondiciones -> Definir la estructura Equipo n en el main
///PostCondiciones ->Crea una estructura con una interfaz asignada por el usuario atravez de parametros
Equipo Crear_Estructura_Equipo( char nombre[30] );

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Mostramos el Nombre y cada uno de los jugadores del equipo
void Mostrar_Equipo_Completo( Equipo e );

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Carga de todas las POSICIONES de los jugadores en la estructura
void Cargar__Todos_Los_Jugadores( Equipo e );

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Carga UNA POSICION especifica de los jugadores en la estructura
void Cargar_Jugador_Especifico( Equipo e );

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Elimina un jugador especifico
void Eliminar_Jugador( Equipo e);

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Elimina todos los jugadores
void Eliminar_Todos_Los_Jugadores( Equipo e );

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Colocamos un nuevo nombre al equipo
void Cargar_Nombre_Equipo ( Equipo e );


/// GETTER OBTENER NOMBRE

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main Y la posicion del jugador.
///PostCondiciones -> Retorna nu jugador especifico del equipo
char* Obtener_Jugador( Equipo e, int posicion );

///PreCondiciones -> Definir previamente el equipo y enviarlo por parametro dentro del main.
///PostCondiciones -> Retorna el nombre del equipo
char* Obtener_Equipo( Equipo e );

#endif // EQUIPO_H_INCLUDED
