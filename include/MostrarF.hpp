#include <Interpolacion.hpp>
#include <iostream>

class MostrarF
{
private:
    
public:
  void mostrarFormulaGeneral(int grado);
  
};

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