#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "=== Завдання 2 (Варіант 20) ===" << endl;
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    // Перевірка належності верхньому трикутнику
    bool inTopTriangle = (y >= 0) && (y <= 1 - fabs(x));

    // Перевірка належності нижньому трикутнику (в IV чверті)
    bool inBottomTriangle = (x >= 0) && (y <= 0) && (y >= x - 1);

    // Точка входить, якщо вона належить хоча б одній із частин
    if (inTopTriangle || inBottomTriangle) {
        cout << "Точка (" << x << "; " << y << ") належить заштрихованій області." << endl;
    } else {
        cout << "Точка (" << x << "; " << y << ") НЕ належить заштрихованій області." << endl;
    }

    return 0;
}