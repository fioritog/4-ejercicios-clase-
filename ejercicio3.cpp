#include <iostream>
using namespace std;

/*EJERCICIO 3*/
/*
    algoritmo:
        >declarar variable NUM como integral.
        >dejar que el usuario ingrese numero para despueshacerel conteo regresivo sobre el.
        >funcion FOR desde i hasta el numero ingresado donde:
                > por cada i calcular NUM - i y mostrar el resultado


*/

int main(){
    int NUM;
    cout << "Ingresa el mayor numero del conteo" <<endl;
    cin>> NUM;
    for (int i = NUM; i >= 0; i--){
        cout<< i <<endl;
    };




return 0;
}
