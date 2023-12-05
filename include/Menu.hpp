#include <iostream>
#include <iomanip>
#include "Lagrange.hpp"

class Menu
{
public:
    Menu();
    void ejecutarMenu();

private:
    PuntosX puntosX;
    PuntosY puntosY;
    Lagrange lagrange;
    int grado;
    bool datosIngresados;
};

Menu::Menu() : datosIngresados(false)
{
    // Constructor
}

void Menu::ejecutarMenu()
{
    int opcion;
    bool repetir = true;

    do
    {
        std::cout << "\n\nBienvenido a la interpolacion con espaciamiento variable " << std::endl;
        std::cout << "Opcion 1. Ingresar valores de x " << std::endl;
        std::cout << "Opcion 2. Ingresar valores de y " << std::endl;
        std::cout << "Opcion 3. Calcular Polinomio" << std::endl;
        std::cout << "Opcion 4. Mostrar Datos Tabulados de x" << std::endl;
        std::cout << "Opcion 5. Mostrar Datos Tabulados de y" << std::endl;
        std::cout << "Opcion 6. Mostrar fórmula" << std::endl;
        std::cout << "0. SALIR" << std::endl;

        std::cout << "\nIngrese una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            std::cout << "Ingrese el grado del polinomio (Menor igual a " << PuntosX::MAX_GRADO << "): ";
            std::cin >> grado;

            if (grado > PuntosX::MAX_GRADO)
            {
                std::cout << "El grado del polinomio no puede ser mayor de " << PuntosX::MAX_GRADO << ".\n";
            }
            else
            {
                puntosX.ingresarDatos(grado);
                datosIngresados = true;
                // Copiar datos a Lagrange
                for (int i = 0; i <= grado; ++i)
                {
                    lagrange.datos[i][0] = puntosX.datos[i];
                }
            }
            break;

        case 2:
            std::cout << "Ingrese el grado del polinomio (Menor igual a " << PuntosY::MAX_GRADO << "): ";
            std::cin >> grado;

            if (grado > PuntosY::MAX_GRADO)
            {
                std::cout << "El grado del polinomio no puede ser mayor de " << PuntosY::MAX_GRADO << ".\n";
            }
            else
            {
                puntosY.ingresarDatos(grado);
                datosIngresados = true;
                // Copiar datos a Lagrange
                for (int i = 0; i <= grado; ++i)
                {
                    lagrange.datos[i][1] = puntosY.datos[i];
                }
            }
            break;

        case 3:
            if (!datosIngresados)
            {
                std::cout << "Error: Debes ingresar datos primero (Opcion 1 o 2).\n";
            }
            else
            {
                double valorInterpolacion;
                std::cout << "\nIngrese el valor para la interpolación (x): ";
                std::cin >> valorInterpolacion;
                double resultadoInterpolacion = lagrange.calcularPolinomio(valorInterpolacion, grado);
                std::cout << "El resultado de la interpolacion en el valor x = " << valorInterpolacion << " es: " << resultadoInterpolacion << std::endl;
            }
            break;

        case 4:
            if (!datosIngresados)
            {
                std::cout << "Error: Debes ingresar datos primero (Opción 1).\n";
            }
            else
            {
                puntosX.mostrarTabla(grado);
            }
            break;

        case 5:
            if (!datosIngresados)
            {
                std::cout << "Error: Debes ingresar datos primero (Opción 2).\n";
            }
            else
            {
                puntosY.mostrarTabla(grado);
            }
            break;

        case 6:
            if (!datosIngresados)
            {
                std::cout << "Error: Debes ingresar datos primero (Opción 1 o 2).\n";
            }
            else
            {
                lagrange.mostrarFormulaGeneral(grado);
            }
            break;

        case 0:
            repetir = false;
            break;

        default:
            std::cout << "Opción no válida. Inténtelo de nuevo.\n";
        }
    } while (repetir);
}