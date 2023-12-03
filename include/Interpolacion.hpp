#include <iostream>
#include <iomanip>

class Interpolacion {
public:
    static const int MAX_GRADO = 10;  // Agregamos la definición de MAX_GRADO aquí
    void ingresarDatos(int grado);
    void mostrarFormulaGeneral(int grado);
    double calcularPolinomio(double x, int grado);
    void mostrarTabla(int grado);

private:
    double datos[MAX_GRADO + 1][2];
};

void Interpolacion::ingresarDatos(int grado) {
    std::cout << "Ingresa los valores de x:\n";
    for (int i = 0; i <= grado; ++i) {
        std::cout << "x" << i << ": ";
        std::cin >> datos[i][0]; // x
    }

    std::cout << "Ingresa los valores de y:\n";
    for (int i = 0; i <= grado; ++i) {
        std::cout << "y" << i << ": ";
        std::cin >> datos[i][1]; // y
    }
}

void Interpolacion::mostrarFormulaGeneral(int grado) {
    std::cout << "\nFormula general del polinomio de Lagrange:\n";
    std::cout << "P(x) = ";

    for (int i = 0; i <= grado; ++i) {
        std::cout << datos[i][1];

        for (int j = 0; j <= grado; ++j) {
            if (j != i) {
                std::cout << " * (x - " << datos[j][0] << ") / (" << datos[i][0] << " - " << datos[j][0] << ")";
            }
        }

        if (i < grado) {
            std::cout << " + ";
        }
    }

    std::cout << "\n";
}

double Interpolacion::calcularPolinomio(double x, int grado) {
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

void Interpolacion::mostrarTabla(int grado) {
    std::cout << "\nTabla de resultados:\n";
    std::cout << std::setw(10) << "x" << std::setw(10) << "y" << "\n";
    std::cout << "---------------------------\n";

    for (int i = 0; i <= grado; ++i) {
        std::cout << std::setw(10) << std::fixed << std::setprecision(2) << datos[i][0]
                  << std::setw(10) << std::fixed << std::setprecision(4) << datos[i][1] << "\n";
    }
}