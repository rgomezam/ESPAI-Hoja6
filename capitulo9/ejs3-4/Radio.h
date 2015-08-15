/*
 * Radio.h
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#ifndef RADIO_H_
#define RADIO_H_
#include <iostream>
using namespace std;

namespace raquel {

class Radio {
public:
	Radio();
	virtual ~Radio();

	void encender();
	void apagar();
	//bool getEncendida();
	void getEncendida();
	void cambiarVolumen(int &deltaVolumen);
	int getVolumen();


private:
	bool ON;
	string canal;
	int volumen;
    int * volumenPunt = &volumen;

};

} /* namespace raquel */

#endif /* RADIO_H_ */
