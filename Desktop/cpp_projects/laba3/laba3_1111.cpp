#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть трьохзначне додатнє число N: ";
    cin >> N;

    if (N < 100 || N > 999) {
        cout << "Число повинно бути трьохзначним!" << endl;
        return 1;
    }

    // Розклад числа на цифри
    int d1 = N / 100;       // перша цифра (сотні)
    int d2 = (N / 10) % 10; // друга цифра (десятки)
    int d3 = N % 10;        // третя цифра (одиниці)

    int count = 0;

    if (d1 < 5) count++;
    if (d2 < 5) count++;
    if (d3 < 5) count++;

    cout << "Цифри числа: " << d1 << ", " << d2 << ", " << d3 << endl;
    cout << "Кількість цифр, менших за 5: " << count << endl;

    return 0;
}