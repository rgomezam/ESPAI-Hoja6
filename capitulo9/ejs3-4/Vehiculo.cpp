/*
 * Vehiculo.cpp
 *
 *  Created on: Jun 8, 2015
 *      Author: raquel
 */

#include "Vehiculo.h"
#include <iostream>
using namespace std;

namespace raquel {

Vehiculo::Vehiculo() {  //el constructor por defecto crea una plaza vacia
	existe = false;
	tipo= "vacia";
    modelo= " ";
    color = " ";
    this->horaOcupacion=time(NULL);
}

Vehiculo::Vehiculo(string tipo, string modelo, string color){
	this->tipo=tipo;
	this->modelo=modelo;
	this->color=color;
	cout << "Creando vehiculo " << tipo << " " << modelo << " " << color << endl;
}

/*
Vehiculo::Vehiculo(string NewNombre){
	nombre = NewNombre;
	existe = true;
	cout << "creando vehiculo" << nombre  <<endl;
}
*/


Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}

Radio Vehiculo::getRadio(){
	return this->miRadio;
}


} /* namespace raquel */
