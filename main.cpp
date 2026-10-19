#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> extraerDigitos(int numero) {
    if (numero < 0) numero = -numero;

    string texto = to_string(numero);
    vector<int> digitos;

    for (char c : texto) {
        digitos.push_back(c - '0'); // '2' - '0' = 2
    }

    return digitos;
}

int main() {
    int numero = 2004;
    vector<int> digitos = extraerDigitos(numero);

    // Imprimir elementos
    for (int d : digitos) {
        cout << d << " ";
    }
    // Salida: 2 0 0 4

    return 0;
}