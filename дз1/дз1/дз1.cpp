#include "Header.h"

int main() 
{
	setlocale(LC_ALL, "ru");
	int inputSec, h, m, sec, h1, m1, sec1, temp;

	cout << "Введите время в секундах: ";
	cin >> inputSec;

	h = inputSec / 3600;
	temp = inputSec % 3600;
	m = temp / 60;
	sec = temp % 60;

	cout << "Сейчас " << h << "ч" << ":" << m << "м" <<  ":" << sec << "сек" << "\n";
	temp = 86400 - inputSec;
	h1 = temp / 3600;
	temp = temp % 3600;
	m1 = temp / 60;
	sec1 = temp % 60;

	cout << "Осталось до полуночи: " << h1 << ":";
	cout << m1 << ":" << sec1 << "\n";

	return 0;
}