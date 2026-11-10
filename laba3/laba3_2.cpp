#include <iostream>
using namespace std;

int main() {
    int train_number;
    cout << "Введіть номер поїзда (від 1 до 7): ";
    cin >> train_number;

    switch (train_number) {
        case 1:
            cout << "Поїзд №1: Відправлення о 06:30" << endl;
            break;
        case 2:
            cout << "Поїзд №2: Відправлення о 08:15" << endl;
            break;
        case 3:
            cout << "Поїзд №3: Відправлення о 11:45" << endl;
            break;
        case 4:
            cout << "Поїзд №4: Відправлення о 14:00" << endl;
            break;
        case 5:
            cout << "Поїзд №5: Відправлення о 17:20" << endl;
            break;
        case 6:
            cout << "Поїзд №6: Відправлення о 20:05" << endl;
            break;
        case 7:
            cout << "Поїзд №7: Відправлення о 23:50" << endl;
            break;
        default:
            cout << "Поїзда з таким номером немає в розкладі." << endl;
            break;
    }

    return 0;
}