#include <iostream>
#include <cmath>

int main() {
    int limiteMaximo, base;

    // Lectura del límite máximo y la base
    std::cout << "Ingrese el limite maximo entero positivo: ";
    std::cin >> limiteMaximo;

    std::cout << "Ingrese la base entera positiva: ";
    std::cin >> base;

    // Validación de límite máximo y base
    if (limiteMaximo <= 0 || base <= 0) {
        std::cout << "El limite maximo y la base deben ser enteros positivos." << std::endl;
        return 0;
    }

    // Cálculo y visualización de las potencias de la base
    int potencia = 1;
    int exponente = 0;

    while (potencia < limiteMaximo) {
        std::cout << base << "^" << exponente << " = " << potencia << std::endl;
        exponente++;
        potencia = std::pow(base, exponente);
    }

    return 0;
}
