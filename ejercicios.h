#pragma once
#include <iostream>
#include <vector>

using namespace std;

inline void sumatoria_fracciones_signos_variados() {
    int n;
    double x;

    cout << "Ingrese el valor de X: ";
    cin >> x;
    cout << "Ingrese la cantidad de terminos (N): ";
    cin >> n;

    double resultado = 0.0; 
    int signo = 1;   
    
    for (int i = 1; i <= n; i++) {
        
        int coef = (i + 1) / 2;             
        int deno = coef * i;                   
        int potencia = pow(x, i);     
        
        double termino = signo * ((coef * potencia) / deno);

        resultado += termino;

        cout << "Termino " << i << ": " << termino << endl;

        signo *= -1;
    }
    
    cout << fixed << setprecision(4); 
    cout << "\nEl resultado de la sumatoria es: " << resultado << endl;
}

vector<int> extraerDigitos(int numero) {
    if (numero < 0) numero = -numero;

    string texto = to_string(numero);
    vector<int> digitos;

    for (char c : texto) {
        digitos.push_back(c - '0'); // '2' - '0' = 2
    }

    return digitos;
}
