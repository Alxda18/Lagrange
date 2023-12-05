#include <iostream>
#include <iomanip>

class PuntosY
{
public:
    static const int MAX_GRADO = 10;
    void ingresarDatos(int grado);
    void mostrarTabla(int grado);
    double datos[MAX_GRADO + 1];

private:
};

void PuntosY::ingresarDatos(int grado)
{
    std::cout << "Ingresa los valores de y:\n";
    for (int i = 0; i <= grado; ++i)
    {
        std::cout << "y" << i << ": ";
        std::cin >> datos[i];
    }
}

void PuntosY::mostrarTabla(int grado)
{
    std::cout << "\nTabla de valores de y:\n";
    std::cout << std::setw(10) << "y"
              << "\n";
    std::cout << "---------------------------\n";

    for (int i = 0; i <= grado; ++i)
    {
        std::cout << std::setw(10) << std::fixed << std::setprecision(2) << datos[i] << "\n";
    }
}