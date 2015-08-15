/*
 * Liga.h
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#ifndef LIGA_H_
#define LIGA_H_
#include "Jornada.h"
#include "Equipo.h"

class Liga {
public:
	Liga();
	//Liga(int numEquipos, int numJornadas);
	virtual ~Liga();

	void aniadirEquipo(string nombre);
	void eliminarEquipo(string nombre);

	Jornada arrayJornadas[5];   //No hay forma de hacwer esto "dinamico" ??
	Equipo arrayEquipos[6];

};

#endif /* LIGA_H_ */
