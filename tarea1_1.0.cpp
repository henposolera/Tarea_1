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

int validaJugador();
int validaPuntaje(int puntaje);
void encabezado();

int main() {
	int jugadores = 0;
	int totalJugador;
	int granTotal =0;

	encabezado();
	jugadores = validaJugador();
	int resultado[jugadores][4];
	int puntos[jugadores][4];
	std::cout << "Jugadores: " << jugadores << std::endl;
	for (size_t i = 1; i <= jugadores; i++) {
	totalJugador = 0;
	  for (size_t j = 1; j < 4; j++) {
	    std::cout << "Jugador # " << i << " Flecha # " << j << ": " << std::flush;
	    puntos[i][j] = validaPuntaje(resultado[i][j]);
	    totalJugador = totalJugador + puntos[i][j];
	    granTotal = granTotal + puntos[i][j];
	  }
	  std::cout << "Total Jugador #" << i << ": " << totalJugador << std::endl;
	  if (totalJugador >= 21){
		  std::cout << "Felicidades Jugador # " << i << " has ganado un almuerzo de cortesia ! \n " << std::endl;
	  } else {
		  std::cout << "No has tenido suerte Jugador # " << i << " vuelve a intentar manana ! \n" << std::endl;
	  }
	}
	std::cout << "Total de Puntos: " << granTotal << std::endl;
	double promedio;
	promedio = double(granTotal)/double(jugadores);
	std::cout << "Promedio de puntos por jugador: " << std::setprecision(4) <<  promedio << std::endl;

	return 0;
}


void encabezado(){
std::cout << "----------------------------------------------------------------------------\n";
std::cout << "-----------   Bienvenido al Juego de la Finca Loca -------------------------\n";
std::cout << "---------- Cada jugador tiene 3 flechas para lanzar a la diana -------------\n";
std::cout << "----- El jugador que obtenga 21 puntos o más ganará un almuerzo gratis -----\n";
std::cout << "----------------------------------------------------------------------------\n";
std::cout << "Ingrese el numero de participantes de esta ronda: " << std::flush;
}

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


