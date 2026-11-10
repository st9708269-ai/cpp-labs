#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;

int main() {
    srand(time(0));
    
    const int n = 10;
    int arr[n];
    
    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int max1 = INT_MIN; // Перший найбільший
    int max2 = INT_MIN; // Другий найбільший
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    
    if (max2 != INT_MIN) {
        cout << "Другий за величиною елемент: " << max2 << endl;
    } else {
        cout << "Другого за величиною елемента немає." << endl;
    }
    
    return 0;
}