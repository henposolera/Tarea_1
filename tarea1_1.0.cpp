//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
#include <iomanip>

// declaracion de funciones //
int validaJugador();
int validaPuntaje(int puntaje);
void encabezado();

int main() {
	int jugadores = 0;  // inicializa variable para capturar numero de jugadores
	int totalJugador; // declara variable para obtener total por jugador
	int granTotal = 0; // inicializa variable para obtener total de puntos
	encabezado(); // muestra instrucciones del juego
	jugadores = validaJugador();  // valida el numero de jugadores y asigna a variable jugadores
 	int resultado[jugadores][4];  // declara variable para almacenar puntajes del usuario
	int puntos[jugadores][4];     // declara variable para almacenar puntajes validados

	for (size_t i = 1; i <= jugadores; i++) {   // empieza el loop para registrar puntajes de usuarios
	totalJugador = 0; // se inicializa la variable de total a 0
	  for (size_t j = 1; j < 4; j++) {
	    std::cout << "Ingrese los puntos obtenidos del jugador # " << i << " en la flecha # " << j << ": " << std::flush;
	    puntos[i][j] = validaPuntaje(resultado[i][j]);
	    totalJugador = totalJugador + puntos[i][j];
	    granTotal = granTotal + puntos[i][j];
	  }
	  std::cout << "--------------------------------------------------------------------------------------" << std::endl;
	  std::cout << "Total de puntos obtenidos del Jugador #" << i << ": " << totalJugador <<  std::endl;
	  if (totalJugador >= 21){   // se identifica si el jugador gano el almuerzo de cortesia
		  std::cout << "Felicidades Jugador # " << i << " has ganado un almuerzo de cortesia ! \n " << std::endl;
	  } else {
		  std::cout << "No has tenido suerte Jugador # " << i << " vuelve a intentar manana ! \n" << std::endl;
	  }
	} // finaliza el loop
	std::cout << "------------------------El juego ha finalizado--------------------------\n"; // se indica el final del juego
	std::cout << "Total de Puntos: " << granTotal << std::endl; // muestra total de puntos de todos los jugadores
	double promedio = 0; // inicializa variable para promedio
	promedio = double(granTotal)/double(jugadores);  // obtiene el promedio casting los valores a double
	std::cout << "Promedio de puntos por jugador: " << std::setprecision(4) <<  promedio << std::endl;  // muestra el promedio con hasta 2 decimales

	return 0;
}

// funcion para mostrar instrucciones
void encabezado(){
std::cout << "----------------------------------------------------------------------------\n";
std::cout << "------------------   Bienvenido al Juego de la Finca Loca ------------------\n";
std::cout << "---------- Cada jugador tiene 3 flechas para lanzar a la diana -------------\n";
std::cout << "--------- Debe de ingresar el puntaje de cada flecha en el sistema ---------\n";
std::cout << "----- El jugador que obtenga 21 puntos o más ganará un almuerzo gratis -----\n";
std::cout << "---- El sistema indicara si el jugador gano o no el almuerzo de cortesia ---\n";
std::cout << "------ El juego va a iniciar, siga la instrucciones que se presentan ------\n";
std::cout << "----------------------------------------------------------------------------\n";
std::cout << "Ingrese el numero de participantes de esta ronda: " << std::flush;
}

// funcion para validar el input del numero de jugadores
int validaJugador()
{
    int x;
    std::cin >> x;
    while(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Error: Solo se permiten numeros" << std::endl ;
        std::cout << "Ingrese de nuevo el numero de jugadores: " << std::flush;
        std::cin >> x;
    }
    return x;
}

// funcion para validar el input del puntaje por flecha
int validaPuntaje(int puntaje)
{
    std::cin >> puntaje;
    while((std::cin.fail()) || (puntaje <= 0) || (puntaje > 10))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Error: Solo se permiten numeros del 1 al 10" << std::endl;
        std::cout << "Vuelva a Ingresar el valor de la flecha: " << std::flush;
        std::cin >> puntaje;
    }
    return puntaje;
}

