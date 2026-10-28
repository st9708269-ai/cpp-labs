#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    cout << "--- Завдання 4 (Варіант 20) ---" << endl;

    double eps;
    cout << "Введіть точність eps (наприклад, 0.0001): ";
    cin >> eps;

    // --- Спосіб 1: цикл while ---
    double sum_while = 1.0 / (1 * 3); // Перший доданок (k = 0)
    int k = 1;
    double term = 0.0;

    while (true) {
        double den1 = 4 * k + 1;
        double den2 = 4 * k + 3;
        term = 1.0 / (den1 * den2);

        if (abs(term) < eps) break;

        if (k % 2 == 1) {
            sum_while += term;  // Знаки чергуються: +, -, +, -...
        } else {
            sum_while -= term;
        }
        k++;
    }
    double pi_while = sum_while * 8.0;
    cout << "[while] Обчислене значення Pi = " << pi_while << endl;

    // --- Спосіб 2: цикл do...while ---
    double sum_do = 1.0 / (1 * 3);
    k = 1;

    do {
        double den1 = 4 * k + 1;
        double den2 = 4 * k + 3;
        term = 1.0 / (den1 * den2);

        if (abs(term) < eps) break;

        if (k % 2 == 1) {
            sum_do += term;
        } else {
            sum_do -= term;
        }
        k++;
    } while (abs(term) >= eps);

    double pi_do = sum_do * 8.0;
    cout << "[do...while] Обчислене значення Pi = " << pi_do << endl;

    return 0;
}