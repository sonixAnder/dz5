#include "Header.h"

int main() 
{
    setlocale(LC_ALL, "ru");
    int seconds;

    cout << "Введите время в секундах: ";
    cin >> seconds;

    int remainingSeconds = 8 * 3600 - seconds;
    int remainingHours = remainingSeconds / 3600;

    cout << "Осталось впахивать " << remainingHours << " часов" << endl;

    return 0;
}
