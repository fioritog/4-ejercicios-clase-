#include <iostream>
using namespace std;

/*EJERCICIO*/
/*
    ALGORITMO:
        >Inicializar variable NUM (string).
        >inicializar TOTAL en 0.
        >Que el ususario ingrese un numero.
        >funcion IF donde si el numero ingresado:
            >es 1,2 o 3 es primo directamente.
            >para el resto hacer NUM.lenght() para sacar la cantidad de digitos del numero ingresado, dentro hacer FOR donde:
                                                                                                            > de i = 1 to NUM.lencht(), sumar el contenido en TOTAL, al final del FOR % esa suma TOTAL por 3, si es 0 es no primo, si es = es primo.


*/

int main (){
    int NUM;
    int RESTOS = 0;
    int DIVIDENDO = 1;
    cout << "_Ingresa el numero a analizar" <<endl;
    cin >> NUM;
    do{
        if (NUM % DIVIDENDO == 0){
                RESTOS ++;
        }
        DIVIDENDO ++;
    } while (DIVIDENDO <= NUM);
    if (RESTOS == 2){
        cout << NUM << " es un numero PRIMO" <<endl;
    } else{
        cout << NUM << " no es un numero PRIMO" <<endl;
    }




return 0;
}
