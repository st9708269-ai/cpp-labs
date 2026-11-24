#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int m = 3, n = 3;
    int arr[m][n];

    cout << "Масив " << m << "x" << n << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10 + 1; // Випадкові числа від 1 до 10
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int mainDiagSum = 0;      // Головна діагональ (зліва направо)
    int secondaryDiagSum = 0; // Побічна діагональ (справа наліво)

    for (int i = 0; i < m; i++) {
        mainDiagSum += arr[i][i];
        secondaryDiagSum += arr[i][n - 1 - i];
    }

    cout << "\nСума елементів головної діагоналі: " << mainDiagSum << endl;
    cout << "Сума елементів побічної діагоналі: " << secondaryDiagSum << endl;
    cout << "Загальна сума обох діагоналей: " << mainDiagSum + secondaryDiagSum << endl;

    return 0;
}