//============================================================================
// Name        : capitulo9ej5.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*5. Práctica final del capítulo
Vamos a crear una aplicación para gestionar una liga de fútbol.*/

#include <iostream>
using namespace std;
#include "Liga.h"
#include "Equipo.h"

int i;
int contadorJornadas = 0;

string nombre;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	//cout << "Cuantos equipos tiene su liga?" << endl;
	//cin >> j;
	Liga miLiga;  //Creando liga con j equipos;

	while (true) {
		cout
				<< "Que quiere haacer? \n 1) Aniadir un equipo a la liga \n 2) Eliminar un equipo de la liga \n"
						" 3) Introducir los partidos de una jornada \n 4) Introducir los resultados de una jornada \n 5) Ver los partidos y resultados \n "
						"6) Mostrar toda la liga  \n 7) Salir" << endl;
		cin >> i;

		switch (i) {
		case 1:
			cout << "como se llama el equipo que quiere aniadir? (1 palabra)"
					<< endl;
			cin >> nombre;
			miLiga.aniadirEquipo(nombre);
			break;


		case 2:
			cout << "como se llama el equipo que quiere eliminar?" << endl;
			cin >> nombre;
			miLiga.eliminarEquipo(nombre);
			break;

		case 3:
			cout << "introducir los partidos de la jornada actual, numero: "  << contadorJornadas << endl;

			miLiga.arrayJornadas[contadorJornadas].introducirPartidos();
			//contadorJornadas++;  //OBS el contador no pasa hasta qe no introduzcamos los resultados
			break;

		case 4:
					cout << "introducir los resultados de la jornada actual, numero: "  << contadorJornadas << endl;

					miLiga.arrayJornadas[contadorJornadas].introducirResultados();
					contadorJornadas++;
					break;

		case 5:
			cout << "mostramos los resultados de la jornada actual: " << contadorJornadas-1 <<  endl;
			miLiga.arrayJornadas[contadorJornadas-1].mostrarResultados();
			break;

		case 6:
			cout << "Mostrando toda la liga " << endl;
			for (int i=0 ; i < contadorJornadas ; i++){
				miLiga.arrayJornadas[i].mostrarResultados();
				break;
			}

		default:
			return 0;

		}

	}

	return 0;
}
