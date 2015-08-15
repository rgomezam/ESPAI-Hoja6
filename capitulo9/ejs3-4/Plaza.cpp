/*
 * Plaza.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#include "Plaza.h"
#include "Vehiculo.h"
using namespace raquel;

namespace raquel {

Plaza::Plaza() {
	// TODO Auto-generated constructor stub
	//cout << "Creando plaza vacia" << endl;
	ocupada = false;
}

Plaza::Plaza(string tipo,string modelo, string color){


	this->vehiculo.existe= true;
	this->vehiculo.tipo=tipo;
    this->vehiculo.modelo=modelo;
	this->vehiculo.color=color;

	cout << "creando plaza con el vehiculo  " << this->vehiculo.tipo << " " << this->vehiculo.color  << endl;

}

Plaza::~Plaza() {
	// TODO Auto-generated destructor stub
}

Vehiculo Plaza::getVehiculo(){
	return this->vehiculo;
}


} /* namespace raquel */
