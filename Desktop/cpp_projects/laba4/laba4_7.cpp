#include <iostream>
#include <iomanip> // Бібліотека для маніпуляторів форматування (setprecision, fixed)

using namespace std;

int main() {
    // Оголошуємо 5 змінних
    float v1, v2, v3, v4, v5;

    // Зчитуємо 5 значень з вводу
    cin >> v1 >> v2 >> v3 >> v4 >> v5;

    // 1. Стандартний вивід (без фіксованої точності)
    cout << v1 << endl;

    // 2. Вивід з 2 знаками після коми (з нулем у кінці: 2.30)
    cout << fixed << setprecision(2) << v2 << endl;

    // 3. Вивід з 6 знаками після коми
    cout << fixed << setprecision(6) << v3 << endl;

    // 4. Вивід з 2 знаками після коми
    cout << fixed << setprecision(2) << v4 << endl;

    // 5. Вивід з 0 знаками після коми
    cout << fixed << setprecision(0) << v5 << endl;

    return 0;
}