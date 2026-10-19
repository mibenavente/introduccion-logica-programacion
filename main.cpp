#include <iostream>
#include <vector>

using namespace std;

// Función para mostrar un vector en formato (x1, x2, ..., xn)
void imprimirVector(const vector<double>& v) {
    cout << "(";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }
    cout << ")";
}

// a) Suma de dos vectores en R^n: w_i = u_i + v_i
vector<double> sumarVectores(const vector<double>& u, const vector<double>& v) {
    size_t n = u.size();
    vector<double> resultado(n);
    for (size_t i = 0; i < n; i++) {
        resultado[i] = u[i] + v[i];
    }
    return resultado;
}

// b) Multiplicación de un vector en R^n por un escalar alpha: w_i = alpha * u_i
vector<double> multiplicarPorEscalar(double alpha, const vector<double>& u) {
    size_t n = u.size();
    vector<double> resultado(n);
    for (size_t i = 0; i < n; i++) {
        resultado[i] = alpha * u[i];
    }
    return resultado;
}

int main() {
    int n;
    cout << "============================================" << endl;
    cout << "OPERACIONES CON VECTORES EN R^n (C++)" << endl;
    cout << "============================================" << endl;

    cout << "Ingrese la dimension 'n' de los vectores: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: La dimension debe ser un entero positivo." << endl;
        return 1;
    }

    vector<double> u(n);
    vector<double> v(n);

    // Lectura del vector u
    cout << "\n--- Ingrese los elementos del vector u ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "u[" << i + 1 << "]: ";
        cin >> u[i];
    }

    // Lectura del vector v
    cout << "\n--- Ingrese los elementos del vector v ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i + 1 << "]: ";
        cin >> v[i];
    }

    // a) Suma de vectores
    vector<double> suma = sumarVectores(u, v);
    cout << "\n[a] Suma de vectores (u + v): ";
    imprimirVector(suma);
    cout << endl;

    // b) Multiplicación por escalar
    double alpha;
    cout << "\n--- Multiplicacion por un escalar alpha ---" << endl;
    cout << "Ingrese el valor del escalar alpha: ";
    cin >> alpha;

    vector<double> prodEscalarU = multiplicarPorEscalar(alpha, u);
    cout << "[b] Resultado de (" << alpha << " * u): ";
    imprimirVector(prodEscalarU);
    cout << endl;

    return 0;
}