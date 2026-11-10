#include <iostream>

using namespace std;

int main() {
    int c0;
    cin >> c0; // Зчитуємо вхідне число

    int steps = 0; // Лічильник кроків

    // Цикл виконується, поки c0 не дорівнює 1
    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2; // Якщо парне
        } else {
            c0 = 3 * c0 + 1; // Якщо непарне
        }
        cout << c0 << endl; // Виводим поточне значення c0
        steps++; // Збільшуємо лічильник кроків
    }

    // Виводимо підсумкову кількість кроків
    cout << "steps = " << steps << endl;

    return 0;
}