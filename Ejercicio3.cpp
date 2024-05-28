#include <iostream>
using namespace std;

int main() {
    int numero;

    cout <<"Bienvenido al programa para evaluar si los numeros son impares.\n";
    cout <<"Por favor, ingrese el numero del arreglo: ";
    cin >> numero;

    int arreglo[numero];
    int pares[numero];
    int contadorimpares = 0;

    for (int i = 0; i < numero; ++i) {
        cout << "Por favor, ingrese el numero " << i + 1 << ": ";
        cin >> arreglo[i];
        
        if (arreglo[i] % 2 != 0) {
            pares[contadorimpares++] = arreglo[i];
        }
    }

    cout << "Los numeros impares son: ";
    for (int i = 0; i < contadorimpares; ++i) {
        cout << pares[i] << " ";
    }
    cout << endl;

    return 0;
}

