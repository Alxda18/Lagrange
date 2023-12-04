#include <iostream>
#include <iomanip>

class PuntosX {
public:
    static const int MAX_GRADO = 10;
    void ingresarDatos(int grado);
    void mostrarTabla(int grado);
    double datos[MAX_GRADO + 1];

private:
   
};

void PuntosX::ingresarDatos(int grado) {
    std::cout << "Ingresa los valores de x:\n";
    for (int i = 0; i <= grado; ++i) {
        std::cout << "x" << i << ": ";
        std::cin >> datos[i];
    }
}

void PuntosX::mostrarTabla(int grado) {
    std::cout << "\nTabla de valores de x:\n";
    std::cout << std::setw(10) << "x" << "\n";
    std::cout << "---------------------------\n";

    for (int i = 0; i <= grado; ++i) {
        std::cout << std::setw(10) << std::fixed << std::setprecision(2) << datos[i] << "\n";
    }
}