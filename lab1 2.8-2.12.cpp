#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 2.8" << endl;
	int  i, j, k, m;  char c, d;   i = 1;  j = 2;  k = -7; m = 0; c = 'w';
	d = 'a' + 1 < c;
	cout << d << endl;
	m = 3 < j < 5;
	cout << m << endl;
	m = c != 87;
	cout << m << endl;
	m = !c + 87;
	cout << m << endl;
	k == j - 9 == i;
	cout << k << endl;
	i += ++j + 3;
	cout << i << endl;
	cout << 1 + 3 * (m += 7) / 5 << endl;
	m = -i - 5 * j >= k + 1;
	cout << m << endl;
	m = 3 == j < 5;
	cout << m << endl;
	m = c = !87;
	cout << m << endl;
	!m == c + 87;
	cout << m << endl;
	k *= 3 + j;
	cout << k << endl;
	k %= m = 1 + m / 2;
	cout << k << endl;
	c = c + i < c - 'x' + 10;
	cout << c << endl;
	//cout << i + j++ + k == -2 * j << endl;
	//m == c = 'w';
	//cout << m << endl;
	//m = !c = 87;
	m != c + 87;
	cout << m << endl << endl;
	//i + j = !k;
	//cout << i + j =! k << endl;
	//cout << 1 + 3 * m += 7 / 5 << endl;
	//cout << i - k == '0' + 9 < 10 << endl;
	cout << "Задание 2.9" << endl;
	int x;
	x = 1;
	if (x == !(!x)) {
		cout << "Утверждение верно" << endl;
	}
	else {
		cout << "Утверждение неверно" << endl;
	}
	if (x == x && true) {
		cout << "Утверждение верно" << endl;
	}
	else {
		cout << "Утверждение неверно" << endl;
	}
	cout << "Команда and==&&, а команда not==!" << endl << endl;
	
	cout << "Задание 2.10" << endl;
	cout << "не знаю" << endl << endl;
	cout << "Задание 2.11" << endl;
	cout << "!( a>b ) == (b>=a)" << endl;
	cout << "!( a<2 || a>5) == (2>=a || 5>=a)" << endl;
	cout << "! ( 2*a == b+4 )  == (2*a != b+4)" << endl;
	cout << "! ( a<1 || b<2 && c<3 ) == ( a>=1|| b>=2 && c>=3)" << endl;
	cout << "! ( a<b && c<d ) == (a>=b && c>=d)" << endl << endl;
	cout << "Задание 2.12" << endl;
	cout << "c - s / i (Тип выражения = int)" << endl;
	cout << "u * 3 - 3.0 * u - i = (Тип выражения = unsigned int)" << endl;
	cout << "(5 * lng - ‘a’ ) * ( s + u / 2 ) (Тип выражения = unsigned long)" << endl;
	cout << "u - us * i = (Тип выражения = unsigned int)" << endl;
	cout << "( sc + d ) * ld = (Тип выражение = long double)" << endl;
	cout << "( f + 3 ) / ( 2.5f - s * 3.14 ) = (Тип выражения  = Float)" << endl << endl;
}
