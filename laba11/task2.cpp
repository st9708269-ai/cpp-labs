#include <iostream>
#include <iomanip>

using namespace std;

// Оголошення структури Date зі значеннями за замовчуванням
struct Date {
    int hours = 0;
    int minutes = 0;
};

int main() {
    Date startTime, endTime;

    // Введення часу початку події
    do {
        cout << "Введіть час початку події (години 0-23): ";
        cin >> startTime.hours;
        cout << "Введіть час початку події (хвилини 0-59): ";
        cin >> startTime.minutes;

        if (startTime.hours < 0 || startTime.hours >= 24 || 
            startTime.minutes < 0 || startTime.minutes >= 60) {
            cout << "Помилка! Некоректний час початку. Спробуйте ще раз.\n\n";
        }
    } while (startTime.hours < 0 || startTime.hours >= 24 || 
             startTime.minutes < 0 || startTime.minutes >= 60);

    // Введення часу завершення події
    do {
        cout << "Введіть час завершення події (години 0-23): ";
        cin >> endTime.hours;
        cout << "Введіть час завершення події (хвилини 0-59): ";
        cin >> endTime.minutes;

        if (endTime.hours < 0 || endTime.hours >= 24 || 
            endTime.minutes < 0 || endTime.minutes >= 60) {
            cout << "Помилка! Некоректний час завершення. Спробуйте ще раз.\n\n";
        }
    } while (endTime.hours < 0 || endTime.hours >= 24 || 
             endTime.minutes < 0 || endTime.minutes >= 60);

    // Переводимо обидва моменти часу у хвилини від початку доби
    int startTotalMinutes = startTime.hours * 60 + startTime.minutes;
    int endTotalMinutes = endTime.hours * 60 + endTime.minutes;

    int diffMinutes;
    // Якщо час завершення менший за час початку, значить подія перейшла через північ (на наступну добу)
    if (endTotalMinutes >= startTotalMinutes) {
        diffMinutes = endTotalMinutes - startTotalMinutes;
    } else {
        diffMinutes = (24 * 60 - startTotalMinutes) + endTotalMinutes;
    }

    Date duration;
    duration.hours = diffMinutes / 60;
    duration.minutes = diffMinutes % 60;

    // Виведення тривалості
    cout << "Тривалість події: " 
         << duration.hours << " год " 
         << duration.minutes << " хв (формат ГГ:ХХ -> "
         << setfill('0') << setw(2) << duration.hours << ":" 
         << setfill('0') << setw(2) << duration.minutes << ")" << endl;

    return 0;
}