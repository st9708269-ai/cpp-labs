#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Налаштування української мови в консолі Visual Studio
    setlocale(LC_ALL, "Ukrainian");

    cout << "--- Завдання 1 ---" << endl;

    for (int i = 1; i <= 5; ++i) {
        double x;
        cout << "Введіть значення x (" << i << " з 5): ";
        cin >> x;

        double y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "При x = " << x << ", y = " << y << endl;
    }

    return 0;
}