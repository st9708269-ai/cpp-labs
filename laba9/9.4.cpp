#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    const int n = 10;
    int arr[n];
    
    // Заповнення масиву випадковими числами від 1 до 50
    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int A;
    cout << "Введіть число A: ";
    cin >> A;
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > A) {
            count++;
        }
    }
    
    cout << "Кількість елементів, більших за " << A << ": " << count << endl;
    
    return 0;
}