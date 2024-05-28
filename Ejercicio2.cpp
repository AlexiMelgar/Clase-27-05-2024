//Crear un programa, que solicite el tamaño del arreglo al usuario y que se puedan
//ingresar los números desde teclado y que evalué si un número es par y si es par que
//lo guarde en un arreglo. Y que imprima el arreglo

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout <<"Bienvenido al programa para evaluar si los números son pares.\n";
    cout <<"Por favor, ingrese el tamaño del arreglo: ";
    cin >> numero;

    int arreglo[numero];
    int pares[numero];
    int contadorpares = 0;

    for (int i = 0; i < numero; ++i) {
        cout << "Por favor, ingrese el número " << i + 1 << ": ";
        cin >> arreglo[i];
        
        if (arreglo[i] % 2 == 0) {
            pares[contadorpares++] = arreglo[i];
        }
    }

    cout << "Los números pares son: ";
    for (int i = 0; i < contadorpares; ++i) {
        cout << pares[i] << " ";
    }
    cout << endl;

    return 0;
}




















