class Menu
{
private:
    /* data */
public:
    Menu(/* args */) {}
    ~Menu() {}
};

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nBienvenido a la interpolacion con espaciamiento variable " << endl;
        cout << "Opcion 1. Ingresar valores " << endl;
        cout << "Opcion 2. Calcular Polinomio" << endl;
        cout << "Opcion 3. Mostrar Datos Tabulados" << endl;
        cout << "Opcion 4 Mostrar forumla" << endl;
        cout << "0. SALIR" << endl;
       
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Valores              
                ingresarDatos(datos, grado);
                datosIngresados = true; // Marcar que los datos se han ingresado
                system("pause"); 
                break;

            case 2:
                // Lista de instrucciones de la opción 2
                if (!datosIngresados) {
                    cout << "Error: Debes ingresar datos primero (Opcion 1).\n";
                } else {
                    double valorInterpolacion;
                    cout << "\nIngrese el valor para la interpolación (x): ";
                    cin >> valorInterpolacion;
                    resultadoInterpolacion = calcularPolinomio(datos, grado, valorInterpolacion);
                    cout << "El resultado de la interpolacion en el valor x = " << valorInterpolacion << " es: " << resultadoInterpolacion << endl;
                }

                system("pause>nul"); // Pausa
                break;

            case 3:
                // MostDatos               
                if (!datosIngresados) {
                    cout << "Error: Debes ingresar datos primero (Opción 1).\n";
                } else {
                    mostrarTabla(datos, grado, grado);
                }

                system("pause"); // Pausa            
                break;

            case 4:
                // Formula              
                if (!datosIngresados) {
                    cout << "Error: Debes ingresar datos primero (Opción 1).\n";
                } else {
                    mostrarFormulaGeneral(datos, grado);
                }

                system("pause"); // Pausa                
                break;

            case 0:
                repetir = false;
                break;
        }        
    } while (repetir);