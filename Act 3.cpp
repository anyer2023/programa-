#include <iostream>

int main() {
    int puntuacion1, puntuacion2, puntuacion3, puntuacion4;
    double media;

    // Lectura de las cuatro puntuaciones
    std::cout << "Ingrese la primera puntuacion: ";
    std::cin >> puntuacion1;

    std::cout << "Ingrese la segunda puntuacion: ";
    std::cin >> puntuacion2;

    std::cout << "Ingrese la tercera puntuacion: ";
    std::cin >> puntuacion3;

    std::cout << "Ingrese la cuarta puntuacion: ";
    std::cin >> puntuacion4;

    // Cálculo de la media
    media = (puntuacion1 + puntuacion2 + puntuacion3 + puntuacion4) / 4.0;

    // Visualización de la tabla de notas según la media
    std::cout << "Media: " << media << std::endl;
    std::cout << "Puntuaci0n: ";

    if (media >= 90 && media <= 100) {
        std::cout << "A";
    } else if (media >= 80 && media < 90) {
        std::cout << "B";
    } else if (media >= 70 && media < 80) {
        std::cout << "C";
    } else if (media >= 60 && media < 70) {
        std::cout << "D";
    } else {
        std::cout << "E";
    }

    std::cout << std::endl;

    return 0;
}
