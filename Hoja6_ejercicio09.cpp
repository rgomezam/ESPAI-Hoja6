
#include <iostream>
using namespace std;

int main() {

	cout << " Haz un programa que nos muestre las tablas de multiplicar del 1 al 10. " << endl;

	for (int i=1; i<=10; i++)
	{
		cout << "Tabla del " << i << endl;
		for(int j=1; j<=10; j++){
			cout << i << "x" << j << " = " << i*j << " , ";
		}

		cout << endl;
	}

	return 0;
}
