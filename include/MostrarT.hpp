class MostrarT
{
private:
    /* data */
public:
    MostrarT(/* args */) {}
    ~MostrarT() {}
};
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

void mostrarTabla(double datos[MAX_GRADO + 1][2], int grado, int n) {
    cout << "\nTabla de resultados:\n";
    cout << setw(10) << "x" << setw(10) << "y" << "\n";
    cout << "---------------------------\n";

    for (int i = 0; i <= n; ++i) {
        cout << setw(10) << fixed << setprecision(2) << datos[i][0]
             << setw(10) << fixed << setprecision(4) << datos[i][1] << "\n";
    }
}