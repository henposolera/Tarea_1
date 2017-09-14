#include <iostream>
using namespace std;

int main() {
	int participante = 0;
	int turno1, turno2, turno3;
	int suma[]={0,0,0};

	cout << "Ingrese Numero de Participantes: " << flush;
	cin >> participante;
	participante = participante -1;
	for(int i = 0;  i <= participante; i++)
	    {
		   cout << endl;
		   cout << "Participante: " << (i+1) << endl;
		   cout << "Turno 1: " << flush;
		   cin >> turno1;
		   while (turno1 <= 0 || turno1 > 10) {
		   		cout << "Error: solo puede ingresar numeros del 1 al 10" << endl;
		   		cout << "Ingrese el puntaje del Turno #1: " << flush;
		   		cin >> turno1;
		   	}
		   cout << "Turno 2: " << flush;
		   cin >> turno2;
		   while (turno2 <= 0 || turno2 > 10) {
		   		cout << "Error: solo puede ingresar numeros del 1 al 10" << endl;
		   		cout << "Ingrese el puntaje del Turno #2: " << flush;
		   		cin >> turno2;
		   	}
		   cout << "Turno 3: " << flush;
		   cin >> turno3;
		   while (turno3 <= 0 || turno3 > 10) {
		   		cout << "Error: solo puede ingresar numeros del 1 al 10" << endl;
		   		cout << "Ingrese el puntaje del Turno #3: " << flush;
		   		cin >> turno3;
		   	}
		   suma[i] = turno1+turno2+turno3;
		   cout << "Total participante # " << (i+1) << ": "<< suma[i] << endl;
			   if (suma[i] >= 21) {
					cout << "Felicidades: has ganado un almuerzo de cortesia!!!" << endl;
				  } else {
					cout << "Mala Suerte: no has ganado el almuerzo, vuelte a intentar pronto!!!" << "\n" << endl;
				  }
		   int totalPuntos = suma[0]+suma[1]+suma[2];
		   cout << "Total de Jugadores: " << (i+1) << endl;
		   cout << "Total de puntos en ronda: " << totalPuntos << endl;
		   cout << "Promedio de puntos obtenidos: " << totalPuntos/(i+1) << endl;

	    }
	  return 0;
	}
