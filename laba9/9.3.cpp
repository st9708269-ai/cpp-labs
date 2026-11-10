#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));
    
    const int n = 10;
    int arr[n];
    
    // Заповнення масиву випадковими числами
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    
    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Пошук індексів мінімального та максимального елементів
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }
    
    // Обмін місцями
    swap(arr[minIdx], arr[maxIdx]);
    
    cout << "Масив після обміну max і min: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}