#include <iostream>
using namespace std;

int main() {

	cout << " Haz una aplicación que sume todos los números  que introduzca el usuario hasta que el total sea superior a 100" << endl;


	int suma=0,x;

	do{
		cout << "introduzca un numero" << endl;
		cin >> x;
		suma += x;
	}while (suma <=100);

	cout << "la suma es igual a " << suma << endl;


	return 0;
}
