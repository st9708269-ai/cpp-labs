#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 4, n = 3;
    int arr[m][n];

    cout << "Масив " << m << "x" << n << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20 - 5; // Випадкові числа від -5 до 14
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nКількість парних чисел у кожному рядку:\n";
    for (int i = 0; i < m; i++) {
        int evenCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Рядок " << i + 1 << ": " << evenCount << endl;
    }

    return 0;
}