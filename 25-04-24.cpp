#include <iostream>
using namespace std;

/*EJERCICIO 1*/
/*
    algoritmo:
        >declarar variable NUM como float.
        >declarar variable TEMP como FLOAT.
        >pedir temperatura a convertir (variable TEMP).
        >mult variable TEMP por 5, dividirla * 9 y al resultado sumarle 32.
        >mostrar conversion.
*/

int main(){
    float NUM;
    float TEMP;
    cout<< "Ingresar una tempreatura en Celsius a transformar a Fahreneit" <<endl;
    cin>>TEMP;
    TEMP = TEMP * 9;
    TEMP = TEMP / 5;
    TEMP = TEMP + 32;
    /*O TEMP = TEMP* 1.8*/
    cout<< "La temperatura en Fahrenheit es:" << TEMP << endl;

return 0;
};

