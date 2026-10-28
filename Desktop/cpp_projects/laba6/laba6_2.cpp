#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    cout << "--- Завдання 2 (Варіант 8) ---" << endl;

    long long product = 1; // Використовуємо long long для запобігання переповненню
    cout << "Введіть 10 натуральних чисел:" << endl;

    for (int i = 1; i <= 10; ++i) {
        long long num;
        cout << "Число " << i << ": ";
        cin >> num;
        product *= num;
    }

    cout << "Добуток усіх введених чисел = " << product << endl;

    return 0;
}