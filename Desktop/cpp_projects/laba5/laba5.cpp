#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

// Помічні функції для Завдання 4
double calculateY4(double x, double a, double b, double c, double d, double e) {
    double denom = d * x + e;
    if (abs(denom) < 1e-9) return -1e9; // Захист від ділення на 0
    return (a * x * x + b * x + c) / denom;
}

int main() {
    int choice;
    do {
        cout << "\n==========================================" << endl;
        cout << "   ЛАБОРАТОРНА РОБОТА: ЦИКЛІЧНІ АЛГОРИТМИ" << endl;
        cout << "   ВАРІАНТ 8" << endl;
        cout << "==========================================" << endl;
        cout << "1. Завдання 1 (Обчислення y = sin^5(x) + |5x - 1.5|)" << endl;
        cout << "2. Завдання 2 (Добуток 10 натуральних чисел)" << endl;
        cout << "3. Завдання 3 (Табулювання y = sqrt(cos(x)) + sin(x))" << endl;
        cout << "4. Завдання 4 (Найбільше значення функції y = (ax^2+bx+c)/(dx+e))" << endl;
        cout << "5. Завдання 5 (Перестановка першої та останньої цифри)" << endl;
        cout << "0. Вихід" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Оберіть номер завдання (0-5): ";
        cin >> choice;
        cout << "------------------------------------------" << endl;

        switch (choice) {
            case 1: {
                // --- ЗАВДАННЯ 1 ---[cite: 4]
                // Обчислення значення функції y = sin^5(x) + |5x - 1.5| для 5 значень x[cite: 4]
                cout << "\n>>> ЗАВДАННЯ 1 <<<\n";
                for (int i = 1; i <= 5; i++) {
                    double x;
                    cout << "Введіть x (" << i << "/5): ";
                    cin >> x;
                    double y = pow(sin(x), 5) + abs(5 * x - 1.5);
                    cout << "y(" << x << ") = " << fixed << setprecision(4) << y << endl;
                }
                break;
            }

            case 2: {
                // --- ЗАВДАННЯ 2 (Варіант 8) ---[cite: 4, 5]
                // Ввести 10 натуральних чисел. Знайти їх добуток[cite: 5].
                cout << "\n>>> ЗАВДАННЯ 2 (Варіант 8) <<<\n";
                long long prod = 1;
                cout << "Введіть 10 натуральних чисел через пробіл або Enter:\n";
                for (int i = 1; i <= 10; i++) {
                    long long num;
                    cin >> num;
                    prod *= num;
                }
                cout << "Добуток введених 10 чисел: " << prod << endl;
                break;
            }

            case 3: {
                // --- ЗАВДАННЯ 3 (Варіант 8) ---[cite: 5]
                // Табулювання функції y = sqrt(cos(x)) + sin(x) з перевіркою ОДЗ[cite: 5]
                cout << "\n>>> ЗАВДАННЯ 3 (Варіант 8) <<<\n";
                double a, b, h;
                cout << "Введіть початок відрізку a: "; cin >> a;
                cout << "Введіть кінець відрізку b: "; cin >> b;
                cout << "Введіть крок h: "; cin >> h;

                cout << "\n-----------------" << endl;
                cout << ":   X   :   Y   :" << endl;
                cout << "-----------------" << endl;

                double x = a;
                bool odz_valid = true;

                while (x <= b + 1e-9) {
                    // ОДЗ: cos(x) >= 0[cite: 5]
                    if (cos(x) < 0) {
                        odz_valid = false;
                        cout << ": " << setw(5) << fixed << setprecision(2) << x 
                             << " : ОДЗ порушено! (cos(x) < 0) :" << endl;
                        break;
                    }
                    double y = sqrt(cos(x)) + sin(x);
                    cout << ": " << setw(5) << fixed << setprecision(2) << x 
                         << " : " << setw(5) << fixed << setprecision(4) << y << " :" << endl;
                    x += h;
                }
                cout << "-----------------" << endl;
                if (!odz_valid) {
                    cout << "Табулювання припинено через вихід за межі ОДЗ." << endl;
                }
                break;
            }

            case 4: {
                // --- ЗАВДАННЯ 4 (Варіант 8) ---[cite: 6, 7]
                // Знайти з точністю eps=0.01 найбільше значення y на [x1, x2][cite: 7]
                cout << "\n>>> ЗАВДАННЯ 4 (Варіант 8) <<<\n";
                double a, b, c, d, e, x1, x2;
                double eps = 0.01;

                cout << "Введіть коефіцієнти a, b, c, d, e: ";
                cin >> a >> b >> c >> d >> e;
                cout << "Введіть межі [x1, x2]: ";
                cin >> x1 >> x2;

                if (x1 > x2) swap(x1, x2);

                // Спосіб 1: while[cite: 6]
                double maxY_while = -1e9;
                double x = x1;
                while (x <= x2 + 1e-9) {
                    double y = calculateY4(x, a, b, c, d, e);
                    if (y > maxY_while) maxY_while = y;
                    x += eps;
                }

                // Спосіб 2: do...while[cite: 6]
                double maxY_do = -1e9;
                x = x1;
                do {
                    double y = calculateY4(x, a, b, c, d, e);
                    if (y > maxY_do) maxY_do = y;
                    x += eps;
                } while (x <= x2 + 1e-9);

                cout << "[Цикл while] Max y = " << maxY_while << endl;
                cout << "[Цикл do...while] Max y = " << maxY_do << endl;
                break;
            }

            case 5: {
                // --- ЗАВДАННЯ 5 (Варіант 8) ---[cite: 10, 11]
                // Переставити місцями першу і останню цифру числа N[cite: 11]
                cout << "\n>>> ЗАВДАННЯ 5 (Варіант 8) <<<\n";
                int N;
                cout << "Введіть натуральне число N: ";
                cin >> N;

                if (N < 10) {
                    cout << "Результат: " << N << " (число однозначне)" << endl;
                } else {
                    int lastDigit = N % 10;
                    int firstDigit = N;
                    int digitsCount = 0;

                    while (firstDigit >= 10) {
                        firstDigit /= 10;
                        digitsCount++;
                    }

                    int middlePart = (N % (int)pow(10, digitsCount)) / 10;
                    int result = lastDigit * (int)pow(10, digitsCount) + middlePart * 10 + firstDigit;

                    cout << "Початкове число: " << N << endl;
                    cout << "Число після перестановки першої і останньої цифри: " << result << endl;
                }
                break;
            }

            case 0:
                cout << "Завершення роботи програми." << endl;
                break;

            default:
                cout << "Некоректний вибір! Спробуйте ще раз." << endl;
        }

    } while (choice != 0);

    return 0;
}