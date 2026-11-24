#include <iostream>
#include <iomanip>

using namespace std;

// Оголошення структури Date зі значеннями за замовчуванням
struct Date {
    int hours = 0;
    int minutes = 0;
};

int main() {
    Date currentTime;
    int addMinutes;

    // Введення початкового часу з перевіркою коректності
    do {
        cout << "Введіть початкові години (0-23): ";
        cin >> currentTime.hours;
        cout << "Введіть початкові хвилини (0-59): ";
        cin >> currentTime.minutes;

        if (currentTime.hours < 0 || currentTime.hours >= 24 || 
            currentTime.minutes < 0 || currentTime.minutes >= 60) {
            cout << "Помилка! Години мають бути від 0 до 23, а хвилини від 0 до 59. Спробуйте ще раз.\n\n";
        }
    } while (currentTime.hours < 0 || currentTime.hours >= 24 || 
             currentTime.minutes < 0 || currentTime.minutes >= 60);

    // Введення хвилин, які потрібно додати
    do {
        cout << "Введіть кількість хвилин, що пройшли (>= 0): ";
        cin >> addMinutes;
        if (addMinutes < 0) {
            cout << "Помилка! Кількість хвилин не може бути від'ємною.\n";
        }
    } while (addMinutes < 0);

    // Переводимо весь час у хвилини, додаємо нові хвилини та формуємо новий час
    int totalMinutes = currentTime.hours * 60 + currentTime.minutes + addMinutes;

    Date resultTime;
    resultTime.hours = (totalMinutes / 60) % 24; // % 24 гарантує, що години не перевищать 23
    resultTime.minutes = totalMinutes % 60;      // % 60 гарантує, що хвилини не перевищать 59

    // Виведення результату у форматі ГГ:ХХ (з додаванням нуля спереду, якщо число < 10)
    cout << "Новий час: " 
         << setfill('0') << setw(2) << resultTime.hours << ":" 
         << setfill('0') << setw(2) << resultTime.minutes << endl;

    return 0;
}