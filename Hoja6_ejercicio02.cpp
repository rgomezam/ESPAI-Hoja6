
#include <iostream>
using namespace std;

int main() {

	cout << " Reescribe el ejercicio anterior usando  do-while y for.  " << endl;

//////////////////usando do-while:
int x= 0;
	do {
			if (x%3 == 0){
				cout << x << " , ";
		}
			x++;
	}while(x<25);

	cout << endl;

	
///////////////////usando for:

	for(int i=0; i<25; i++){
		if (!(i%3)){
			cout << i << " , ";
		}
	}



	return 0;
}
