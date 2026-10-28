#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    cout << "--- Завдання 5 (Варіант 8) ---" << endl;

    long long N;
    cout << "Введіть натуральне число N: ";
    cin >> N;

    if (N < 10) {
        cout << "Результат: " << N << " (число має лише одну цифру)" << endl;
        return 0;
    }

    long long last_digit = N % 10;
    long long temp = N;
    long long digits_count = 0;

    // Обчислення кількості цифр та виділення першої цифри
    while (temp >= 10) {
        temp /= 10;
        digits_count++;
    }
    long long first_digit = temp;

    // Обчислення 10^digits_count
    long long pow10 = 1;
    int i = 0;
    while (i < digits_count) {
        pow10 *= 10;
        i++;
    }

    // Виділяємо середні цифри
    long long middle = (N % pow10) / 10;

    // Збираємо нове число
    long long new_N = last_digit * pow10 + middle * 10 + first_digit;

    cout << "Число після перестановки першої та останньої цифр: " << new_N << endl;

    return 0;
}