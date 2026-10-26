#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
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

inline vector<int> extraerDigitos(int numero) {
    if (numero < 0) numero = -numero;

    string texto = to_string(numero);
    vector<int> digitos;

    for (char c: texto) {
        digitos.push_back(c - '0'); // '2' - '0' = 2
    }

    return digitos;
}

inline void ejercicio77() {
    int n;
    double x;
    cin >> x >> n;

    if (n > 0) {
        double resultado = 0.0;
        for (int i = 1; i <= n; i++) {
            int coef = (i + 1) / 2;
            int deno = coef * i;
            double termino = (coef * pow(x, i)) / deno;

            if (i % 2 != 0) {
                resultado += termino;
            } else {
                resultado -= termino;
            }
        }
        cout << fixed << setprecision(4) << resultado << "\n";
    }
}

inline void piedraPapelTijera() {
    int usuario, pc = 2;
    cin >> usuario;

    if (usuario >= 1 && usuario <= 3) {
        if (usuario == pc) {
            cout << "Empate\n";
        } else if ((usuario == 1 && pc == 3) || (usuario == 2 && pc == 1) || (usuario == 3 && pc == 2)) {
            cout << "Victoria\n";
        } else {
            cout << "Derrota\n";
        }
    } else {
        cout << "Invalido\n";
    }
}

inline void descomponerNumero() {
    int num;
    cin >> num;

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        cout << 0 << "\n";
    } else {
        while (num > 0) {
            cout << num % 10 << "\n";
            num /= 10;
        }
    }
}

inline void maximoComunDivisor() {
    int a, b;
    cin >> a >> b;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int contador = 0;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
        contador++;
    }
    cout << a << "\n";
}

inline double promedioVector(const vector<int> &v) {
    if (v.empty()) {
        return 0.0;
    }

    int suma = 0;
    for (size_t i = 0; i < v.size(); i++) {
        suma += v[i];
    }
    return static_cast<double>(suma) / v.size();
}

inline int contarDigitos(int n) {
    if (n == 0) {
        return 1;
    }

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

inline bool esArmstrong(int n) {
    if (n < 0) {
        return false;
    }

    int numOriginal = n;
    int suma = 0;
    int k = contarDigitos(n);

    while (n > 0) {
        int digito = n % 10;
        suma += pow(digito, k);
        n /= 10;
    }

    if (suma == numOriginal) {
        return true;
    } else {
        return false;
    }
}

inline void sumatoriaImpares() {
    int n;
    double x;
    cin >> x >> n;

    if (n > 0) {
        double resultado = 0.0;
        for (int i = 1; i <= n; i++) {
            int exponente = (2 * i) - 1;
            int denominador = 2 * i;

            double termino = pow(x, exponente) / denominador;

            if (i % 2 != 0) {
                resultado += termino;
            } else {
                resultado -= termino;
            }
        }
        cout << fixed << setprecision(5) << resultado << "\n";
    }
}

inline int estructurasAnidadas01() {
    int num;
    cin >> num;

    if (num < 10) {
        if (num == 1) {
            cout << "El Valor es " << num;
        } else {
            cout << "El Valor es mayor a 1";
        }
    } else {
        cout << "El Valor es mayor que 10";
    }

    return 0;
}

inline void rangoEdad() {
    int edad;
    cout << "Por favor, ingresa tu edad: ";
    cin >> edad;
    if (edad < 18) {
        if (edad < 13) {
            cout << "\nEres un/a **Niño/a**." << endl;
            cout << "Tu edad es menor a 13 años." << endl;
        } else {
            cout << "\nEres un/a **Adolescente**." << endl;
            cout << "Tu edad está entre 13 y 17 años." << endl;
        }
    } else {
        cout << "\nEres un/a **Adulto/a**." << endl;
        cout << "Tu edad es 18 años o más." << endl;
    }
}

inline int disyuncionYConjuncion() {
    bool p, q;
    cin >> p >> q;
    cout << (p and q) << endl;
    cout << (p or q);
    return 0;
}

inline int boolAproboYEntregoProyecto() {
    bool aproboExamen = true;
    bool entregoProyecto = false;
    if (aproboExamen && entregoProyecto) { cout << "El estudiante aprobó el curso." << endl; } else {
        cout << "El estudiante no aprobó el curso." << endl;
    }
    return 0;
}

inline int esMayorQue10() {
    int a = 20;
    int b = 5;
    if (a > 10 || b > 10) cout << "Al menos uno de los números es mayor que 10";
    else cout << "Ninguno de los números es mayor que 10";
    return 0;
}

inline int elMayorDe3Numeros() {
    int a = 101, b = 50, c = 26, g;
    g = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);
    cout << "El número mayor es " << g;
    return 0;
}

inline int cualEsParOImpar() {
    int numero = 10;
    string resultado = (numero % 2 == 0) ? "par" : "impar";
    cout << "El número es " << resultado << endl;
    return 0;
}

inline int usandoSwitch() {
    int clave, numero;
    cin>>clave>>numero; 
    switch(clave){
        case 12: cout<<(numero * 2)<<endl; break;             
        case 15: cout<<(numero * 2.2)<<endl; break;             
        case 18: cout<<(numero * 4.5)<<endl; break;             
        case 19: cout<<(numero * 3.5)<<endl; break;             
        case 23: cout<<(numero * 6)<<endl;  break;             
        case 25: cout<<(numero * 6)<<endl;  break;                        
        case 29: cout<<(numero * 5)<<endl;  break; 
        default: cout<<"Vuelva a intentarlo."<<endl; 
    } 
    return 0; 
}

inline int positivoNegativoONeutro()
{
    int num=-60;
    string resultado;
    if(num==0)
        cout<<"Es un numero cero";
    else
    {
        resultado = (num>0) ? "Es un numero Positivo"  : "Es un numero negativo";
        cout<<resultado;
    }
    return 0;
}

inline int esCapicua4Digitos() {
    int num;

    cout << "Ingrese un número entero de 4 dígitos: ";
    cin >> num;

    // Manejo de signo
    int numAbs = (num < 0) ? -num : num;

    // Validación de 4 dígitos
    if (numAbs >= 1000 && numAbs <= 9999) {
        int d1 = numAbs / 1000;
        int d2 = (numAbs / 100) % 10;
        int d3 = (numAbs / 10) % 10;
        int d4 = numAbs % 10;

        if (d1 == d4 && d2 == d3) {
            cout << "El número " << num << " ES capicúa." << endl;
        } else {
            cout << "El número " << num << " NO es capicúa." << endl;
        }
    } else {
        cout << "Error: El número no tiene 4 dígitos." << endl;
    }

    return 0;
}

inline int sumaDeFraccionesConBandera() {
    double sumaTotal = 0.0;
    double numerador = 0.0;
    double denominador = 6.0;
    bool esTurnoDeSumar = true;

    for (int i = 1; i <= 5; i++) {
        numerador = numerador + 1.0;
        denominador = denominador - 1.0;

        double terminoActual = numerador / denominador;

        if (esTurnoDeSumar) {
            sumaTotal = sumaTotal + terminoActual;
            esTurnoDeSumar = false;
        } else {
            sumaTotal = sumaTotal - terminoActual;
            esTurnoDeSumar = true;
        }

        cout << " termino " << i << " (" << numerador << "/" << denominador
             << ") suma parcial: " << sumaTotal << endl;
    }

    cout << "El resultado es: " << sumaTotal << endl;
    return 0;
}

inline int forAnidado()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == j || i + j == 6 || i == 1 || i == 5 || j == 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

