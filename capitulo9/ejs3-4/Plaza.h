/*
 * Plaza.h
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#ifndef PLAZA_H_
#define PLAZA_H_

#include "Vehiculo.h"

namespace raquel {

class Plaza {
public:
	Plaza();
	Plaza(string,string,string);
	virtual ~Plaza();
    Vehiculo getVehiculo();

private:
	bool ocupada;
	Vehiculo vehiculo;
};



} /* namespace raquel */

#endif /* PLAZA_H_ */
