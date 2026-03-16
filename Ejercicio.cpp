#include <iostream>

using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* cabeza = NULL;
    Nodo* actual = NULL;

    int valor_ingresado;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {

        cout << "Ingrese un numero: ";
        cin >> valor_ingresado;

        Nodo* nuevo_nodo = new Nodo();
        nuevo_nodo->dato = valor_ingresado;
        nuevo_nodo->siguiente = NULL;

        if (cabeza == NULL) {
            cabeza = nuevo_nodo;
        } else {

            actual = cabeza;
            while (actual->siguiente != NULL) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevo_nodo;
        }

        cout << "Deseas ingresar otro numero? (s/n): ";
        cin >> continuar;
    }

    int contador_nodos = 0;
    int suma_total = 0;
    float promedio = 0;

    cout << "\n--- Valores en la lista ---" << endl;
    actual = cabeza;
    while (actual != NULL) {
        cout << "Valor: " << actual->dato  << endl;

        suma_total += actual->dato;
        contador_nodos++;

        actual = actual->siguiente;
    }

    cout << "\nRepresentacion visual:" << endl;
    actual = cabeza;
    while (actual != NULL) {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
    cout << "NULL" << endl;

    if (contador_nodos > 0) {
        promedio = (float)suma_total / contador_nodos;
    }

    cout << "\n--- Resultados Finales ---" << endl;
    cout << "Total de nodos creados: " << contador_nodos <<  endl;
    cout << "Suma de los valores: " << suma_total <<  endl;
    cout << "Promedio de los valores: " << promedio <<  endl;
    cout << "Erix Alejandro Solres Flores";

    return 0;
}