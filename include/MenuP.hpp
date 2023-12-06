#include <iostream>
#include <iomanip>
#include "Menu.hpp"
#include <conio.h>

using namespace std;

class MenuP
{
private:
int opcion;


public:
    void MostrarMP();
    Menu ejecutarMenu1;
};
void MenuP::MostrarMP(){
    
    do
    {
        system("cls");
        cout << "Opcion 1 - Ejecutar Programa\n";
        cout << "Opcion 2 - Acerca de Método Lagrange\n";
        cout << "Opcion 3 - Salir \n\n";

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            
            cout << "Ejecutando Programa ... \n";
            ejecutarMenu1.ejecutarMenu();
            system("cls");
            break;

        case 2:
            
            cout << "El método de Lagrange es una técnica matemática para encontrar máximos y mínimos de una función sujeta a ciertas restricciones. \nSe utiliza introduciendo multiplicadores de Lagrange para formar una nueva función llamada función lagrangiana \nSe resuelven las ecuaciones resultantes para encontrar los valores que cumplen tanto la función objetivo como las restricciones \n";
            
            break;
        case 3:
           
            cout << "Gracias por usar el prrograma, hasta pronto.\n";
            break;
        default:
        
            cout << "No es una opcion valida, selecciona una del menu \n";
            break;
        }
    } while (opcion != 3);
}