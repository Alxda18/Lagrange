#include <iostream>
#include <iomanip>
#include "PuntosX.hpp"
#include "PuntosY.hpp"

class Lagrange
{
public:
    void mostrarFormulaGeneral(int grado);
    double calcularPolinomio(double x, int grado);
    double datos[PuntosX::MAX_GRADO + 1][2];

private:
};

void Lagrange::mostrarFormulaGeneral(int grado)
{
    std::cout << "\nFormula general del polinomio de Lagrange:\n";
    std::cout << "P(x) = ";

    for (int i = 0; i <= grado; ++i)
    {
        std::cout << datos[i][1];

        for (int j = 0; j <= grado; ++j)
        {
            if (j != i)
            {
                std::cout << " * (x - " << datos[j][0] << ") / (" << datos[i][0] << " - " << datos[j][0] << ")";
            }
        }

        if (i < grado)
        {
            std::cout << " + ";
        }
    }

    std::cout << "\n";
}

double Lagrange::calcularPolinomio(double x, int grado)
{
    double resultado = 0.0;

    for (int i = 0; i <= grado; ++i)
    {
        double termino = datos[i][1];

        for (int j = 0; j <= grado; ++j)
        {
            if (j != i)
            {
                termino *= (x - datos[j][0]) / (datos[i][0] - datos[j][0]);
            }
        }

        resultado += termino;
    }

    return resultado;
}