#include <iostream>

int main() {
    int num1, num2, num3;

    // Lectura de los tres enteros
    std::cout << "Ingrese el primer entero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo entero: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer entero: ";
    std::cin >> num3;

    // Verificación del orden numérico
    if (num1 <= num2 && num2 <= num3) {
        std::cout << "Los enteros están en orden numerico ascendente." << std::endl;
    } else if (num1 >= num2 && num2 >= num3) {
        std::cout << "Los enteros están en orden numerico descendente." << std::endl;
    } else {
        std::cout << "Los enteros no están en orden numerico." << std::endl;
    }

    return 0;
}
