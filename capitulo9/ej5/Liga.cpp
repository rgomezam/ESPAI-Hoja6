/*
 * Liga.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#include "Liga.h"
#include "Jornada.h"
#include "Equipo.h"
#include <iostream>


Liga::Liga(){
	//Jornada arrayJornadas[5];
	  // Equipo arrayEquipos[6];
}



/*Liga::Liga(int numEquipos, int numJornadas) {

   Jornada arrayJornadas[numJornadas];
   Equipo arrayEquipos[numEquipos];

}*/

Liga::~Liga() {
	// TODO Auto-generated destructor stub
}


void Liga::aniadirEquipo(string nombre){
	for (int i =0 ; i<6 ; i++){
		if (arrayEquipos[i].getNombre()== "vacio"){
			arrayEquipos[i].setNombre(nombre);
			return;
		}
	}
}


void Liga::eliminarEquipo(string nombre){
	for (int i =0 ; i<6 ; i++){
		if (arrayEquipos[i].getNombre()== nombre){
			arrayEquipos[i].setNombre("vacio");
			return;
		}
	}
}
