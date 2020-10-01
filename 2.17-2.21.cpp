#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 2.17" << endl;
	int k, x;
	cout << "Введите минимум трёхзначное число" << endl;
	cin >> x;
	if (1 <= x / 100 <= 9) {
		k = x / 100;
	}
	k = x / 10 / 10 % 10;
	cout << k << endl << endl;
	cout << "Задание 2.18" << endl;
	int a, b, c;
	cout << "Введите трехзначное число" << endl;
	cin >> x;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	k = a + b + c;
	cout << k << endl << endl;
	cout << "Задание 2.19" << endl;
	//Заменил переменную x из задания на l
	double l = 3.14;
	k = (int)(l * 100) % 10;
	cout << k << endl << endl;
	cout << "Задание 2.20" << endl;
	cin >> x;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	x = c * 100 + b * 10 + a;
	cout << x << endl << endl;
	cout << "Задание 2.21" << endl;
	int hour, min, sec;
	cin >> sec;
	if (sec > 86400) {
		sec = sec - 86400;
	}
	min = sec / 60;
	hour = sec / 3600;
	cout << "hour =" << hour << " min =" << min << endl << endl;
	cout << "Задание 2.22" << endl;
	cin >> l;
	l = (((l *= l * l) *= l) *= l * l);
	cout << l << endl;
}