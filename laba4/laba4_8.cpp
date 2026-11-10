#include <iostream>
#include <cmath> // Для функції fabs() (модуль числа)

using namespace std;

int main() {
    int num1, num2;

    // Зчитуємо два цілих числа
    cin >> num1 >> num2;

    // Ділимо 1.0f на кожне число з перетворенням до float
    float res1 = 1.0f / num1;
    float res2 = 1.0f / num2;

    // Значення epsilon за умовою
    float epsilon = 0.000001f;

    // Порівнюємо модуль різниці двох результатів із epsilon
    if (fabs(res1 - res2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}