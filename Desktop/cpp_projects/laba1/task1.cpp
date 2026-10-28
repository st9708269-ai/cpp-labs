#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Оголошення змінних
    double x, a, b, c, alpha, beta, Y;

    cout << "=== Завдання 1 (Варіант 12) ===" << endl;
    cout << "Введіть значення x: ";
    cin >> x;

    if (x >= 1.5) {
        cout << "Введіть значення a, b, c: ";
        cin >> a >> b >> c;

        // Перевірка на ділення на нуль
        if (a - b + x == 0) {
            cout << "Помилка: Знаменник (a - b + x) дорівнює нулю!" << endl;
            return 1;
        }

        // Обчислення за першою формулою
        Y = ((pow(x, 3) + 3 * a) * c) / (a - b + x);
        cout << "Результат Y = " << Y << endl;
    } else {
        cout << "Введіть значення alpha та beta (у радіанах): ";
        cin >> alpha >> beta;

        // Обчислення за другою формулою
        Y = pow(sin(alpha), 2) * pow(sin(beta), 2);
        cout << "Результат Y = " << Y << endl;
    }

    return 0;
}