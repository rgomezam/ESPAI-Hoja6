/*
 * Jornada.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#include <iostream>
using namespace std;
#include "Jornada.h"
#include "Partido.h"
#include "Equipo.h"

Jornada::Jornada() {
	// TODO Auto-generated constructor stub

}

Jornada::~Jornada() {
	// TODO Auto-generated destructor stub
}

void Jornada::introducirPartidos() {
	string eq1, eq2;

	for (int i = 0; i < 3; i++) {
		cout << "Partido " << i + 1 << " , introduzca el equipo local " << endl;
		cin >> eq1;
		this->arrayPartidos[i].equipo1.setNombre(eq1);
		cout << "Partido " << i + 1 << " , introduzca el equipo visitante " << endl;
		cin >> eq2;
		this->arrayPartidos[i].equipo2.setNombre(eq2);
	}
}

void Jornada::introducirResultados() {
	char res1, res2;

	for (int i = 0; i < 3; i++) {
		cout << "Partido " << i + 1 << " , goles del equipo local? " << endl;
		cin >> res1;
		this->arrayPartidos[i].resultado[0] = res1;
		this->arrayPartidos[i].resultado[1] = '-';
		cout << "Partido " << i + 1 << " , goles  del equipo visitante? " << endl;
		cin >> res2;
		this->arrayPartidos[i].resultado[2] = res2;

	}
}


void Jornada::mostrarResultados() {

	for (int i = 0; i < 3; i++) {
		cout << "Partido " << i + 1 << " : " <<  arrayPartidos[i].equipo1.getNombre()   << " Vs "  << arrayPartidos[i].equipo2.getNombre()  << endl;
		cout << "Resultado: " << arrayPartidos[i].resultado[0]  << arrayPartidos[i].resultado[1] << arrayPartidos[i].resultado[2]  << endl;
	}
}
