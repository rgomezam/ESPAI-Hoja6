#include <iostream>
using namespace std;

int main() {

	cout << " Haz un programa que compruebe si un número es primo. " << endl;

	int test;
	char continuar= 's';

	do {
	cout << "introduzca el numero a comprobar" <<endl;
	cin >> test;


	for (int i=2 ; i<= test ; i++){

		if(i==test){
				cout << "El numero si es primo. Quieres comprobar otro? s/n" << endl;
				cin >> continuar;
				break;
				}

		else if (!(test%i)){
			cout << "el numero no es primo. Quieres comprobar otro? s/n" << endl;
			cin >> continuar;
			break;
		}
		
	}
	}while(continuar=='s');



	return 0;
}
