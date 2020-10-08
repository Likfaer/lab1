# lab1
ВПИ21 Федоров Дмитрий
2.13
а)

int i;
i = (1 || 2) % (1 | 2 );
printf ( "i = %d\n", i);

>> i = 1
b)

int a, b, m, n, z;
m = n = 5;
z = a = b = 0;
z--, ( a = b ) = z + ( m != n );
printf ("%d %d %d %d %d\n", a, b, m, n, z);

>> ошибка
с)

int i = 1;
i = i << i | i;
printf ("i = %d\n", i);

>> i = 3
d)

double x = 1.9; int a;
double b = 3.7;
a = b += (1 && 2 || 3) != (int)x;
printf ("%f %d %f\n", x, a, b);

>> 1.900000 3 3.700000
e)

int x;
x = 5; ++ x =10;
printf ("%d\n", x);

>> ошибка
f)

int i, x, y; x = 5; y = 10; i = 15;
x = ( y = 0, i = 1);
printf("%d %d %d\n", i, x ,y);
( x = y == 0) , i=1;
printf("%d %d %d\n", i, x, y);

>> 1 1 0
>> 1 1 0
g)

int x, y;
x = 5; y = x && ++ x;
printf("%d %d\n", x, y);

>> 6 1
h)

int x = 2, y, z;
x *= 3+2; x *= y = z = 4;
printf ("%d %d %d\n", x, y, z);
x = y == z; x == ( y = z );
printf ("%d %d %d\n", x, y, z);

>> 40 4 4
>> 1 4 4
i)

int x = 2, y = 1, z = 0;
y = x && y || z;
x = x || !y && z;
z = x / ++x;
printf("%d %d %d\n", x, y, z);

>> 2 1 1
j)

int x = 03, y = 02, z = 01;
printf("%d\n", x | y & -z);
printf("%d\n", x ^ y & -z);
printf("%d\n", x & y && z);
printf("%d\n", x<<3);

>> 3
>> 1
>> 1
>> 24
k)

int x, y, z; x = y = z = 1;
x += y += z;
printf("%d\n", x < y ? y++ : x++);
printf("%d\n", z+=x<y ? ++x : y--);
printf("%d %d %d\n", x, y, z);
printf("%d\n", z>=y && y>=x);

>> 3
>> 3
>> 4 1 3
>> 0
l)

int x, y, z, i; x = y = z = 1;
i = ++x || ++y && ++z;
printf("%d%d%d%d\n", x,y,z,i);
i = x++ <= --y || ++z >= i;
printf("%d%d%d%d\n", x,y,z,i);

>> 2111
>> 3021

2.14
double d; float f; long lng; int i; short s;
s = i = lng = f = d = 100/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
d = f = lng = i = s =100/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
s = i = lng = f = d = 1000000/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
d = f = lng = i = s =1000000/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
lng = s = f = i = d =100/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
f = s = d = lng = i = (double)100/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
s = i = lng = f = d = 100/(double)3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
f = s = d = lng = i = (double)100/3;
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
i = s = lng = d = f = (double)(100/3);
printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

>> s = 5653 i = 5653 lng = 5653 f = 5653.000000 d = 5653.000000
>> s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
>> s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
>> s = 33 i = 33 lng = 33 f = 33.333332 d = 33.333333
>> s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000
>> s = 33 i = 33 lng = 33 f = 33.000000 d = 33.000000

2.15
double d = 3.2, x; int i = 2, y;
x = ( y = d / i ) * 2; printf ("x = %f ;y = %d\n", x, y);
x = ( y = d / i ) * 2; printf ("x = %d ;y = %f\n", x, y);
y = ( x = d / i ) * 2; printf ("x = %f ;y = %d\n", x, y);
y = d * ( x = 2.5 / d); printf ("x = %f; y = %d\n", x, y);
x = d * ( y = ( (int)2.9 + 1.1) / d); printf ("x = %d y = %f\n", x, y);

>> x = 2.000000 ;y = 1
>> x = 1 ;y = 2.000000
>> x = 1.600000 ;y = 3
>> x = 0.781250; y = 2
>> x = 0 y = 0.000000

#include <stdio.h>

int main()
{
    double x, y;
    printf("x = ");
    scanf("%lf", &x);
    y = 2 * x * x * x * x - 3 * x * x * x + 4 * x * x - 5 * x + 6; 
    printf("y = %lf", y);
    return 0;
}
