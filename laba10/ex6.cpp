#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 4, n = 7;
    int arr[m][n];

    cout << "Масив " << m << "x" << n << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100 - 30; // Випадкові числа від -30 до 69
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int minVal = arr[0][0];
    int minRow = 0, minCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "\nМінімальний елемент: " << minVal << endl;
    cout << "Індекси (з 0): [" << minRow << "][" << minCol << "]" << endl;
    cout << "Позиція (з 1): рядок " << minRow + 1 << ", стовпець " << minCol + 1 << endl;

    return 0;
}