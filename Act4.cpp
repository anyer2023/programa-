#include <iostream>

int main() {
    int edad1, edad2, edad3;
    int edadMayor, edadMenor;
    double media;

    // Lectura de las edades de los hijos
    std::cout << "Ingrese la edad del primer hijo: ";
    std::cin >> edad1;

    std::cout << "Ingrese la edad del segundo hijo: ";
    std::cin >> edad2;

    std::cout << "Ingrese la edad del tercer hijo: ";
    std::cin >> edad3;

    // Cálculo de la edad mayor
    edadMayor = edad1;
    if (edad2 > edadMayor) {
        edadMayor = edad2;
    }
    if (edad3 > edadMayor) {
        edadMayor = edad3;
    }

    // Cálculo de la edad menor
    edadMenor = edad1;
    if (edad2 < edadMenor) {
        edadMenor = edad2;
    }
    if (edad3 < edadMenor) {
        edadMenor = edad3;
    }

    // Cálculo de la media
    media = (edad1 + edad2 + edad3) / 3.0;

    // Mostrar los resultados
    std::cout << "Edad mayor: " << edadMayor << std::endl;
    std::cout << "Edad menor: " << edadMenor << std::endl;
    std::cout << "Media de las edades: " << media << std::endl;

    return 0;
}
