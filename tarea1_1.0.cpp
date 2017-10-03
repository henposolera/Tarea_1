#include <iostream>
#include <limits>


int validaJugador();
int validaPuntaje(int x);
int unsigned jugadores;
int puntaje[3] = {0,0,0};
int granTotal = 0;

int main()
{
    std::cout << "Ingrese el numero de participantes de esta ronda: " << std::flush;
    jugadores = validaJugador();
    int resultado[jugadores][3];
    int totalJugador = 0;

    for (unsigned i = 1; i <= jugadores; i++) {
        for (unsigned j = 1; j < 4; j++) {
        std::cout << "Jugador " << i << " Flecha " << j << ": " << std::flush;
        puntaje[i] = validaPuntaje(resultado[i][j]);
        }
    totalJugador = puntaje[1] + puntaje[2] + puntaje[3];

    std::cout << "El puntaje del Jugador # "  << i << " es: " << totalJugador << std::endl;
        if (totalJugador >= 21){
            std::cout << "Felicidades!!! has ganado un almuerzo de cortesia" << std::endl;
            } else {
                std::cout << "Tu puntaje es menor de 21. No has ganado un almuerzo esta vez" << std::endl;
                }
    granTotal = granTotal+totalJugador;
    }
    std::cout << "El total de puntos es: " << granTotal << std::endl;
    std::cout << "El promedio de puntos por jugador es de: " << granTotal/jugadores << std::endl;
    return 0;
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

int validaPuntaje(int x)
{
    std::cin >> x;
    while((std::cin.fail()) || (x <= 0) || (x > 10))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Error: Solo se permiten numeros del 1 al 10" << std::endl;
        std::cout << "Vuelva a Ingresar el valor de la flecha: " << std::flush;
        std::cin >> x;
    }
    return x;
}


void encabezado (){
std::cout << "Bienvenido al Juego de la Finca Loca" << std::endl;
std::cout << "Cada jugador tiene 3 flechas para lanzar a la diana" << std::endl;
std::cout << "El jugador que obtenga 21 puntos o más ganará un almuerzo gratis" << std::endl;
}
