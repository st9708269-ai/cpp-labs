#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    cout << "--- Завдання 3 (Варіант 8) ---" << endl;

    double a, b, h;
    cout << "Введіть a (початок): ";
    cin >> a;
    cout << "Введіть b (кінець): ";
    cin >> b;
    cout << "Введіть h (крок): ";
    cin >> h;

    cout << "\n-----------------------" << endl;
    cout << ":      X      :      Y      :" << endl;
    cout << "-----------------------" << endl;

    double x = a;
    while (x <= b + 1e-9) {
        double val = cos(x) + sin(x);

        if (val < 0) {
            cout << "\nПомилка: x = " << x << " не належить ОДЗ (підкореневий вираз < 0)." << endl;
            break; // Зупиняємо табулювання
        }

        double y = sqrt(val);
        cout << ": " << setw(11) << fixed << setprecision(4) << x 
             << " : " << setw(11) << fixed << setprecision(4) << y << " :" << endl;

        x += h;
    }
    cout << "-----------------------" << endl;

    return 0;
}