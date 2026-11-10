#include <iostream>

using namespace std;

int main(void) {
    double pi4 = 0.;
    long   n;

    cout << "Number of iterations? ";
    cin >> n;

    // --- Вставити цей цикл замість // Insert your code here ---
    for (long i = 0; i < n; i++) {
        double term = 1.0 / (2 * i + 1);
        if (i % 2 == 0) {
            pi4 += term; // парний крок -> додаємо
        } else {
            pi4 -= term; // непарний крок -> віднімаємо
        }
    }
    // --------------------------------------------------------

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}