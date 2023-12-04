# Lagrange
## Este es el Proyecto final de las materias POO y Métodos numéricos.
## Integrantes del equipo 
![image](https://github.com/colomosceti/practica-dino-chrome-EdgarCuarenta/assets/143459565/bd6bf12a-4c6e-4000-830f-b4ca3fdd7ce7)

#### Alexis Daniel Cortes Tavera 22310259
#### Edgar Javier Fregoso Cuarenta 22310285

En análisis numérico, el polinomio de Lagrange, llamado así en honor a Joseph-Louis de Lagrange, es una forma de presentar el polinomio que interpola un conjunto de puntos dados. Lagrange publicó este resultado en 1795, pero lo descubrió Edward Waring en 1779 y fue redescubierto más tarde por Leonhard Euler en 1783.1 Dado que no existe un único polinomio interpolador para un determinado conjunto de puntos, resulta algo engañoso llamar a este polinomio el polinomio interpolador de Lagrange. Un nombre más apropiado es interpolación polinómica en la forma de Lagrange.
**¿Para que sirve?**

El sistema de Lagrange, también conocido como puntos de Lagrange, es utilizado en el campo de la mecánica celeste para identificar ubicaciones específicas en el espacio donde las fuerzas gravitacionales combinadas de dos cuerpos celestes producen condiciones estables.

**Pasos para una buena compilacion :)**

Para la funcion tabular. Obtener el valor de y para x = 2.

![Captura de pantalla 2023-12-04 013125](https://github.com/Alxda18/Lagrange/assets/143459565/6c732491-395a-443b-a254-05a0660ff74f)


![Captura de pantalla 2023-12-04 012906](https://github.com/Alxda18/Lagrange/assets/143459565/a295ad57-6a68-4bef-af93-6d31142cc829)



![Captura de pantalla 2023-12-04 013426](https://github.com/Alxda18/Lagrange/assets/143459565/08c2ee74-7de2-4ddc-9f25-bb0797f3af44)


**Explicacion del programa**

    1. Uso de Bibliotecas:

	•	El código incluye las bibliotecas <iostream> y <Interpolacion.hpp>. La última parece ser un archivo de encabezado que contiene la definición de la clase Interpolacion

	**2.	Declaración de Clase Menu:**

	•	Se declara la clase Menu, que tiene un objeto de la clase Interpolacion, así como algunas variables miembro como grado y datosIngresados.

	**3.	Constructor Menu::Menu():**

	•	El constructor inicializa datosIngresados en false.

	**4.	Método Menu::ejecutarMenu():**

	•	Este método contiene un bucle do-while que presenta un menú interactivo al usuario.

	**5.	Menú de Opciones:**

	•	Las opciones del menú incluyen:

	•	Opción 1: Ingresar valores para la interpolación, incluido el grado del polinomio.

	•	Opción 2: Calcular el polinomio interpolante para un valor dado de .

	•	Opción 3: Mostrar los datos tabulados utilizados para la interpolación.

	•	Opción 4: Mostrar la fórmula general del polinomio interpolante.

	•	Opción 0: Salir del programa.

	**6.	Implementación de Opciones:**

	•	Cada opción del menú está implementada en un bloque switch.

	•	Se verifica si los datos han sido ingresados antes de realizar ciertas operaciones.

	7.	**Uso de la Clase Interpolacion:**

	•	La clase Interpolacion se utiliza para realizar la interpolación y mostrar los resultados.

	**8.	Bucle do-while:**

	•	El bucle continúa hasta que el usuario elige salir (opción 0).