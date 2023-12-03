#include <iostream>
#include <Interpolacion.hpp>

class Menu {
public:
    Menu();  // Constructor
    void ejecutarMenu();

private:
    Interpolacion interpolacion;  // Objeto de la clase Interpolacion
    int grado;
    bool datosIngresados;
};

Menu::Menu() : datosIngresados(false) {
    // Constructor
}

void Menu::ejecutarMenu() {
    int opcion;
    bool repetir = true;

    do {
        std::cout << "\n\nBienvenido a la interpolacion con espaciamiento variable " << std::endl;
        std::cout << "Opcion 1. Ingresar valores " << std::endl;
        std::cout << "Opcion 2. Calcular Polinomio" << std::endl;
        std::cout << "Opcion 3. Mostrar Datos Tabulados" << std::endl;
        std::cout << "Opcion 4. Mostrar fórmula" << std::endl;
        std::cout << "0. SALIR" << std::endl;

        std::cout << "\nIngrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Valores
                std::cout << "Ingrese el grado del polinomio (Menor igual a " << Interpolacion::MAX_GRADO << "): ";
                std::cin >> grado;

                if (grado > Interpolacion::MAX_GRADO) {
                    std::cout << "El grado del polinomio no puede ser mayor de " << Interpolacion::MAX_GRADO << ".\n";
                } else {
                    interpolacion.ingresarDatos(grado);
                    datosIngresados = true;
                }
                break;

            case 2:
                // Calcular Polinomio
                if (!datosIngresados) {
                    std::cout << "Error: Debes ingresar datos primero (Opcion 1).\n";
                } else {
                    double valorInterpolacion;
                    std::cout << "\nIngrese el valor para la interpolación (x): ";
                    std::cin >> valorInterpolacion;
                    double resultadoInterpolacion = interpolacion.calcularPolinomio(valorInterpolacion, grado);
                    std::cout << "El resultado de la interpolacion en el valor x = " << valorInterpolacion << " es: " << resultadoInterpolacion << std::endl;
                }
                break;

            case 3:
                // Mostrar Datos Tabulados
                if (!datosIngresados) {
                    std::cout << "Error: Debes ingresar datos primero (Opción 1).\n";
                } else {
                    interpolacion.mostrarTabla(grado);
                }
                break;

            case 4:
                // Mostrar Fórmula
                if (!datosIngresados) {
                    std::cout << "Error: Debes ingresar datos primero (Opción 1).\n";
                } else {
                    interpolacion.mostrarFormulaGeneral(grado);
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