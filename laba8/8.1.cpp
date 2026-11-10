#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int m = 12;
    int arr[m] = {5, -3, 12, 0, 8, -9, 4, 15, 2, -1, 7, 10};

    // Вивід початкового масиву
    cout << "Початковий масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортування за зростанням
    sort(arr, arr + m);

    cout << "За зростанням:    ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортування за спаданням
    sort(arr, arr + m, greater<int>());

    cout << "За спаданням:    ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}