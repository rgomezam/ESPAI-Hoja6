# EjerciciosEspai
Ejercicios para el curso de C++

Ejercicios capítulo 6

1. Dado el siguiente programa:

#include <iostream>
using namespace std;
int main() {
int x = 0;
while (x < 25)
{
if (x%3 == 0)
{
cout << x << endl;
}
x++;
}
return 0;
}

a. Explica su funcionamiento
b. ¿Qué pasaría si borramos la línea x++; ?

2. Reescribe el ejercicio anterior usando do-while y for.

3. Haz una aplicación que nos muestre los números pares que existen entre 2 números que nos dará
el usuario.

4. Haz un programa que compruebe si un número es primo.

5. Escribe el código necesario para que el siguiente programa se salte todos los múltiplos de 5.

#include <iostream>
using namespace std;
int main() {
int x = 0;
while (x < 100)
{
if (x%5 == 0)
{
//codigo aquí.
}
cout << x << endl;
x++;
}
return 0;
}

6. Escribe el código necesario para que el siguiente programa se termine en el número que ha indicado el usuario.

#include <iostream>
using namespace std;
int main() {
int x = 0;
int numero = 0;
cout << "escribe el numero donde el programa terminará" << endl;
cin >> numero;
while (x < 100)
{
if (x == numero)
{
//codigo aquí.
}
cout << x << endl;
x++;
}
return 0;
}

7. Haz una aplicación que sume todos los números que introduzca el usuario hasta que el total sea
superior a 100.

8. ¿Cuál será el resultado del siguiente programa?
#include <iostream>
using namespace std;
int main() {
int x = 0;
for(;;)
{
cout << "soy el " << x << endl;
if (x == 10)
break;
x++;
}
return 0;
}

9. Haz un programa que nos muestre las tablas de multiplicar del 1 al 10.

10. Reescribe la práctica del capítulo anterior para que funcione con switch.

11. Práctica final del capítulo

Haz el juego de Doble o Nada. El usuario debe poder jugar tantas veces como quiera, hasta que escriba Salir.
Reglas del juego:
1. El jugador tiene una cantidad de dinero con la que puede jugar. Apuesta una parte.
2. Se comprueba si ha ganado o perdido (aleatorio).
a. Si ha ganado, gana lo mismo que ha apostado
b. Si ha perdido, pierde esa cantidad
3. Esas cantidades se acumulan o restan del total del usuario.
4. Puede jugar hasta que quiera, o mientras le quede dinero para apostar.
