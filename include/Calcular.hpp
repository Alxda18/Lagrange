class Calcular
{
private:
    /* data */
public:
    Calcular(/* args */) {}
    ~Calcular() {}
};
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

double calcularPolinomio(double datos[MAX_GRADO + 1][2], int grado, double x) {
    double resultado = 0.0;

    for (int i = 0; i <= grado; ++i) {
        double termino = datos[i][1]; // y_i

        for (int j = 0; j <= grado; ++j) {
            if (j != i) {
                termino  *= (x - datos[j][0]) / (datos[i][0] - datos[j][0]);
            }
        }

        resultado += termino;
    }

    return resultado;
}