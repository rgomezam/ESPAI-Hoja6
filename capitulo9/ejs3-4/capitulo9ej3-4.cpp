//============================================================================
// Name        : caoitulo9ejs3-4.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Plaza.h"
#include "Vehiculo.h"
using namespace std;
using namespace raquel;

int delta;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Plaza garaje[10][10];  // 10x10 plazas

	Plaza plaza24("moto","vespa","verde");
		garaje[2][4]= plaza24;


	//Encender radio
	cout << "Vamos a encender la radio del coche en la plaza 24 " << endl;

    garaje[2][4].getVehiculo().getRadio().encender() ;


     //Estado
     cout << "Comprobamos el estado de la radio: " << endl;

     garaje[2][4].getVehiculo().getRadio().getEncendida() ;


     //Cambiar volumen
     cout << "introduzca cuanto quiere subir o bajar el volumen (por ejemplo 3, o -3)  " << endl;
     cin >> delta;

     garaje[2][4].getVehiculo().getRadio().cambiarVolumen(delta) ;  // Cambia el volumen

     cout << "El nuevo volumen es  "<< garaje[2][4].getVehiculo().getRadio().getVolumen()  << endl;


     //Apagar
	cout << "Vamos a apagar la radio del coche en la plaza 24 " << endl;

    garaje[2][4].getVehiculo().getRadio().apagar() ;


     //Estado
     cout << "Comprobamos el estado de la radio" << endl;
     garaje[2][4].getVehiculo().getRadio().getEncendida() ;


	return 0;
}
