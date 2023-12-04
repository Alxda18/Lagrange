class main
{
private:
    /* data */
public:
    main(/* args */) {}
    ~main() {}
};

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_GRADO = 10;

int main()
{
    int opcion, grado, n;
    bool repetir = true;
    double datos[MAX_GRADO + 1][2];
    double resultadoInterpolacion;
    bool datosIngresados = false;

    cout << "Ingrese el grado del polinomio ( Menor igual a " << MAX_GRADO << "): ";
    cin >> grado;

    if (grado > MAX_GRADO)
    {
        cout << "El grado del polinomio no puede ser mayor de " << MAX_GRADO << ".\n";
        return 1;
    }

    return 0;
}