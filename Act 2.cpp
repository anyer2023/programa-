#include <iostream>
#include <cmath>

int main() {
    int limiteMaximo, base;

    // Lectura del l�mite m�ximo y la base
    std::cout << "Ingrese el limite maximo entero positivo: ";
    std::cin >> limiteMaximo;

    std::cout << "Ingrese la base entera positiva: ";
    std::cin >> base;

    // Validaci�n de l�mite m�ximo y base
    if (limiteMaximo <= 0 || base <= 0) {
        std::cout << "El limite maximo y la base deben ser enteros positivos." << std::endl;
        return 0;
    }

    // C�lculo y visualizaci�n de las potencias de la base
    int potencia = 1;
    int exponente = 0;

    while (potencia < limiteMaximo) {
        std::cout << base << "^" << exponente << " = " << potencia << std::endl;
        exponente++;
        potencia = std::pow(base, exponente);
    }

    return 0;
}
