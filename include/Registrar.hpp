class Registrar
{
private:
    /* data */
public:
    Registrar(/* args */) {}
    ~Registrar() {}
};
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;
void ingresarDatos(double datos[MAX_GRADO + 1][2], int grado) {
    cout << "Ingresa los valores de x:\n";
    for (int i = 0; i <= grado; ++i) {
        cout << "x" << i << ": ";
        cin >> datos[i][0]; // x
    }

    cout << "Ingresa los valores de y:\n";
    for (int i = 0; i <= grado; ++i) {
        cout << "y" << i << ": ";
        cin >> datos[i][1]; // y
    }
}