/*
 * Radio.cpp
 *
 *  Created on: Jun 21, 2015
 *      Author: raquel
 */

#include "Radio.h"
#include <iostream>
using namespace std;
namespace raquel {

Radio::Radio() {
	// TODO Auto-generated constructor stub
    volumen = 5;
    ON = false;
}


Radio::~Radio() {
	// TODO Auto-generated destructor stub
}



void Radio::encender(){

	ON= true;
	volumen= 5;
   cout << "radio encendida. El volumen es"<< volumen << endl;
}

void Radio::apagar(){

	ON = false;
	cout << "radio apagada" << endl;
}

void Radio::getEncendida(){
	//return ON;
	if (ON){
		cout << "la radio esta encendida" << endl;
	}

	if(!ON){
		cout << "la radio esta apagada" << endl;
	}
}

void Radio::cambiarVolumen(int &deltaVolumen){

	*volumenPunt = volumen + deltaVolumen;
    //cout << "el nuevo volumen es " << *volumenPunt << endl;
}

int Radio::getVolumen(){
	return *volumenPunt;

}



} /* namespace raquel */
