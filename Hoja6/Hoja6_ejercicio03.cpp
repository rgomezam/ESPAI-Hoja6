#include <iostream>
using namespace std;

int main() {

	cout << " Haz una aplicación que nos muestre los números  pares que existen entre 2 números que nos dará el usuario " << endl;

	int max,min;
	cout << "introduzca el numero menor" <<endl;
	cin >> min ;
	cout << "introduzca el mayor" << endl;
	cin >> max;

	for (int i=min; i<max; i++){
		if (!(i%2)){
			cout << i << " , ";
		}
	}

	return 0;
}
