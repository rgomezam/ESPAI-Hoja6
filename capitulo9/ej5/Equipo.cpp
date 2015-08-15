/*
 * Equipo.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#include "Equipo.h"

Equipo::Equipo(){
	// TODO Auto-generated constructor stub
	cout << "creando equipo" << endl;
	nombre = "vacio";
}/*

Equipo::Equipo(string nombre) {       //Sin punteros este constructor no es muy util
	this-> nombre = nombre;
   cout << "Creando equipo " << nombre << endl;
} */


string Equipo::getNombre(){
	return this->nombre;
}


void Equipo::setNombre(string nombre){
	this-> nombre = nombre;
	cout << "El nombre del equipo es " << this->nombre << endl;
}

Equipo::~Equipo() {
	// TODO Auto-generated destructor stub
}

