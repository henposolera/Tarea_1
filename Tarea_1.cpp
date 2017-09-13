//Tarea 1 //
// Tarea1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello" << endl;
	//Recibir los puntos de cada turno para su procesamiento.//
	int turno1;
	cout << "Turno #1" << endl;
	cin >> turno1;
	while (turno1 <= 0 || turno1 > 10) {
		cout << "Error: ingrese numero correcto" << endl;
		cout << "Turno #1" << endl;
		cin >> turno1;
	}
	cout << "Turno 1 = " << turno1 << endl;
	int turno2;
	cout << "Turno #2" << endl;
	cin >> turno2;
	while (turno2 <= 0 || turno2 > 10) {
		cout << "Error: ingrese numero correcto" << endl;
		cout << "Turno #2" << endl;
		cin >> turno2;
	}
	cout << "Turno 2 = " << turno2 << endl;
	//int sumTurnos = turno1 + turno2;
	//cout << "La suma de turnos es: " << sumTurnos << endl;

	int turno3;
	cout << "Turno #3" << endl;
	cin >> turno3;
	while (turno3 <= 0 || turno3 > 10) {
		cout << "Error: ingrese numero correcto" << endl;
		cout << "Turno #3" << endl;
		cin >> turno3;
	}
	cout << "Turno 3 = " << turno3 << endl;
	int sumTurnos = turno1 + turno2 + turno3;
	cout << "La suma de turnos es: " << sumTurnos << endl;


	/*cout << "Turno #2" << endl;
	int turno2;
	cin >> turno2;
	cout << "Turno #3" << endl;
	int turno3;
	cin >> turno3;*/
    return 0;
}
