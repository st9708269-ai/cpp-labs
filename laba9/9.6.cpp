#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    const int n = 10;
    int arr[n];
    
    // Згенеримо масив із діапазону [0, 5], щоб нулі мали шанс випасти
    cout << "Масив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 6;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int zeroIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroIndex = i;
            break; // Перериваємо після першого знайденого нуля
        }
    }
    
    if (zeroIndex != -1) {
        cout << "Індекс першого нульового елемента: " << zeroIndex << endl;
        cout << "Порядковий номер: " << zeroIndex + 1 << endl;
    } else {
        cout << "Масив не містить нульових елементів." << endl;
    }
    
    return 0;
}