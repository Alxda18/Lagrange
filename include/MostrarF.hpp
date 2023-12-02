class MostrarF
{
private:
    /* data */
public:
    MostrarF(/* args */) {}
    ~MostrarF() {}
};

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;
void mostrarFormulaGeneral(double datos[MAX_GRADO + 1][2], int grado) {
    cout << "\nFormula general del polinomio de Lagrange:\n";
    cout << "P(x) = ";

    for (int i = 0; i <= grado; ++i) {
        cout << datos[i][1];

        for (int j = 0; j <= grado; ++j) {
            if (j != i) {
                cout << " * (x - " << datos[j][0] << ") / (" << datos[i][0] << " - " << datos[j][0] << ")";
            }
        }

        if (i < grado) {
            cout << " + ";
        }
    }

    cout << "\n";
}