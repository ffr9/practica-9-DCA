#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Ingrese operador (+, -, *, /): ";
    cin >> op;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << "Suma: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resta: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplicación: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Multiplicación: " << num1 * num2 << endl;
            else
                cout << "Error: División por cero no permitida" << endl;
            break;
        default:
            cout << "Operador inválido" << endl;
    }

    return 0;
}

