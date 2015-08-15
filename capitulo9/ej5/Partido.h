/*
 * Partido.h
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#ifndef PARTIDO_H_
#define PARTIDO_H_
#include "Equipo.h"

class Partido {
public:
	Partido();
	virtual ~Partido();
	Equipo equipo1;
	Equipo equipo2;
   char resultado[3];
};

#endif /* PARTIDO_H_ */
