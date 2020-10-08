# lab1
ВПИ21 Федоров Дмитрий

//1)x^21 за шесть операций
#include <stdio.h>

int main ()
{
    double x, y;
    printf ("x = ");
    scanf ("%lf", &x);
    y = x * x * x;
    y = y * y * x;
    y = y * y * y;
    printf ("y = %lf", y);
    return 0;
}

//2)x^3 и x^10 за четыре операции
#include <stdio.h>

int main ()
{
    double x, y, z;
    printf ("x = ");
    scanf ("%lf", &x);
    z = x * x;
    y = z * x;
    printf ("y = %lf\n", y);
    y = z * y;
    y = y * y;
    printf ("y = %lf", y);
    return 0;
}
//3)x^5 и x^13 за пять операций
#include <stdio.h>

int main ()
{
    double x, y, z;
    printf ("x = ");
    scanf ("%lf", &x);
    y = x * x;
    z = y * x;
    y = z * y;
    printf ("y = %lf\n", y);
    y = y * y * z;
    printf ("y = %lf", y);
    return 0;
}

//4)x^2, x^5 и x^17 за шесть операций
#include <stdio.h>

int main ()
{
    double x, y, z;
    printf ("x = ");
    scanf ("%lf", &x);
    y = x * x;
    printf ("y = %lf\n", y);
    z = y * y;
    y = z * x;
    printf ("y = %lf\n", y);
    z = z * z;
    y = z * z * x;
    printf ("y = %lf", y);
    return 0;
}

//5)x^4, x^12 и x^28 за шесть операций
int main ()
{
    double x, y, z;
    printf ("x = ");
    scanf ("%lf", &x);
    y = x * x;
    z = y = y * y;
    printf ("y = %lf\n", y);
    y = y * y;
    y = z * y;
    printf ("y = %lf\n", y);
    y = y * y;
    y = y * z;
    printf ("y = %lf", y);
    return 0;
}
