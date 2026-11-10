#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    // Перевірка коректності введеного значення n
    if (n <= 1) {
        cout << "Sorry, the side size is too small" << endl;
        return 0;
    }
    
    // Встановлюємо розумну верхню межу (наприклад, 20)
    if (n > 20) {
        cout << "Sorry, the side size is too big" << endl;
        return 0;
    }

    // Верхній край рамки
    cout << '+';
    for (int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    // Бічні сторони та внутрішня порожнеча
    for (int i = 0; i < n - 2; i++) {
        cout << '|';
        for (int j = 0; j < n - 2; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }

    // Нижній край рамки
    cout << '+';
    for (int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    return 0;
}