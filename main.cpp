//main.cpp
#include <iostream>
#include "matematicas.h"//Inclusimos nuestro contrato

int main () {
    int x = 10;
    int y = 4;

    int resultado_suma = sumar(x, y); //Funciona
    int resultado_resta = resta(x, y); //Funciona
    int resultado_multiply = multiplicacion(x, y);//Funciona
    double resultado_divide = division(x, y);//Funciona

    std::cout <<"Suma: " << resultado_suma << std::endl;
    std::cout <<"Resta: " << resultado_resta << std::endl;
    std::cout <<"Multiply: " << resultado_multiply << std::endl;
    std::cout <<"Divide: " << resultado_divide << std::endl;

    return 0;
}
