/*
 * Jornada.h
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#ifndef JORNADA_H_
#define JORNADA_H_

#include "Partido.h"
#include "Equipo.h"

class Jornada {
public:
	Jornada();
	virtual ~Jornada();

	void introducirPartidos();
	void introducirResultados();
	void mostrarResultados();

	Partido arrayPartidos[3];

};

#endif /* JORNADA_H_ */
