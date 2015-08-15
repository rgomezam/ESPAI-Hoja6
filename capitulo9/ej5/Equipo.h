/*
 * Equipo.h
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#ifndef EQUIPO_H_
#define EQUIPO_H_
#include <iostream>
using namespace std;

class Equipo {
public:
	Equipo();
	//Equipo(string nombre);  //Sin punteros este constructor no es muy util
	virtual ~Equipo();

	string getNombre();
	void setNombre(string nombre);

private:
    string nombre;

};


#endif /* EQUIPO_H_ */
