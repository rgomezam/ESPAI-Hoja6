
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;


//Juego de doble o nada

int main() {

	int saldo,apuesta;
	char seguir= 's';
	bool ganar;

	  /* random seed: */
	  srand (time(NULL));
	  saldo = rand() % 1000 + 10;  //Se inicia con un numero aleatorio de € entre 10 y 1010

	cout << "Comienzas con " << saldo << " euros." << endl;

	while(seguir =='s'){

	cout << "Cuanto quieres apostar? Si ganas se doblara esta cantidad y si pierdes la perderas." << endl;
	cin >> apuesta;
	if (apuesta > saldo){
		cout << "No puedes apostar mas de lo que tienes!. Introduce otra cantidad " << endl;
		cin >> apuesta;
	}


	ganar = (rand()% (500*saldo))%2 ;  //genera un numero aleatorio entre 0 y 1 (false o true). Multiplicado por el saldo par que sea "realmente"  aleatorio


	if (ganar){
		cout << "has ganado!" << endl;
		saldo += apuesta;
	}
	else if (!ganar){
		cout << "has perdido!" << endl;
		saldo -= apuesta;
		if (saldo <= 0){
			cout << "no tienes mas dinero! GAME OVER" << endl;
			return 0;
		}
	}

	cout << "Tu saldo es " << saldo << "euros" <<endl;
	cout << "Quieres seguir?  s/n" << endl;
	cin >> seguir;


	}





	return 0;
}
