#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    if (n <= 0) {
        cout << "Масив повинен бути непорожнім!" << endl;
        return 0;
    }

    int arr[100];
    cout << "Введіть " << n << " елементів масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Знаходимо індекс першого максимального елемента
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Замінюємо від'ємні елементи нулями до maxIndex
    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    // Виводим результат
    cout << "Результуючий масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}