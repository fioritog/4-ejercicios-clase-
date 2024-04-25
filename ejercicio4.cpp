#include <iostream>
using namespace std;

/*EJERCICIO 4*/
/*
    algoritmo:
     >declarar variables NUM, CONT y LIMITE.
     >usuario ingresa NUM.
     >funcion FOR 1 a NUM donde: en un contador se van sumando NUM y por cada iteración NUM pasa a ser NUM - 1
     > mostrar resultado del contador.

*/



int main (){
    int NUM;
    int CONT = 0;
    cout << "Ingrese el numero limite" <<endl;
    cin >> NUM;
    if (NUM <= 0){
        cout << "No se puede sacar la suma de numeros negativos o 0" <<endl;
    } else {
        for (int i = NUM; i>= 0; i-- ){
            CONT = CONT + i;
        };
        cout<< "La suma hasta el limite es: " << CONT <<endl;
    };

return 0;
}
