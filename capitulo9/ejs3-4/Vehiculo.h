/*
 * Vehiculo.h
 *
 *  Created on: Jun 8, 2015
 *      Author: raquel
 */

#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <iostream>
using namespace std;

#include "Radio.h"

namespace raquel {

class Vehiculo {
public:
	Vehiculo();
	Vehiculo(string tipo, string modelo, string color);
    Radio getRadio();

	string tipo; //coche, moto, bicicleta...
	string modelo; //marca o modelo
	string color;
	bool existe;  //para ver la ocupacion de las plazas, siempre que hay un vehiculo con un nombre es true, pero por defecto es false
	time_t horaOcupacion;
    virtual ~Vehiculo();

private:
    Radio miRadio;

};


} /* namespace raquel */

#endif /* VEHICULO_H_ */
