//============================================================================
// Name        : Calculadora.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int select;
float x, y;

float suma(float, float);
float resta(float,float);
float multiplicacion(float, float);
float division(float, float);


int main() {

	while (true) {

		cout
				<< "que operacion quieres realizar? \n 1) suma \n 2) resta \n 3) multiplicacion \n 4) division \n 5) Salir"
				<< endl;
		cin >> select;

		switch (select) {
		case 1:
			cout << "Introduzca los numeros que quiere sumar: x= " << endl;
			cin >> x;
			cout << "mas y= " << endl;
			cin >> y;
			cout << "la suma de ambos es " << suma(x, y) << endl;
			break;

		case 2:
			cout << "Introduzca los numeros que quiere restar: x= " << endl;
			cin >> x;
			cout << " menos y= " << endl;
			cin >> y;
			cout << "la resta de ambos es " << resta(x, y) << endl;
			break;

		case 3:
			cout << "Introduzca los numeros que quiere multiplicar: x= " << endl;
					cin >> x;
					cout << " por y= " << endl;
					cin >> y;
					cout << "la multiplicacion es " << multiplicacion(x, y) << endl;
			break;

		case 4:
			cout << "Introduzca los numeros que quiere dividir: x= " << endl;
					cin >> x;
					cout << " entre y= " << endl;
					cin >> y;
					cout << "la division es " << division(x, y) << endl;
			break;

		default:
			return 0;

		}

	}
	return 0;
}

float suma(float a, float b) {
	return a + b;
}

float resta(float a, float b) {
	return a - b;
}

float multiplicacion(float a, float b) {
	return a*b;
}

float division(float a, float b) {
	return a/b;
}
