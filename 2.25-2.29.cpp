# lab1
ВПИ21 Федоров Дмитрий
2.25
#include <stdio.h>

int main()
{
    char a, b, c, d;
    int x;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    x = d | c << 8 | b << 16 | a << 24;
    printf("%#x\n%d", x, x);
    return 0;
}

2.26
#include <stdio.h>

int main()
{
    char a, b, c, d;
    int x;
    scanf("%d", &x);
    d = x;
    c = x >> 8;
    b = x >> 16;
    a = x >> 24;
    printf("%c%c%c%c", a, b, c, d);
    return 0;
}

2.27
#include <stdio.h>

int main()
{
    int n, p, x, y, i, m = 0xFFFFFFFF;
    scanf("%d%d%x%x", &n, &p, &x, &y);
    y = ~y;
    for (i = n; i; m <<= 1, i--);
    for (i = n; i < p; i++)
    {
        m <<= 1;
        m += 1;
    }

    y <<= (32 - n);
    x >>= (p - n);
    x |= y;
    x >>= 1;
    x &= m;
    printf("X=%x\n", x);
    return 0;
}

2.28
#include <stdio.h>

int main ()
{
    int x, n;
    scanf("%d%d", &x, &n);
    x >>= n;
    printf("x = %d", x);
    return 0;
}

2.29
#include <stdio.h>

int main ()
{
    int x, n;
    scanf("%d%d", &x, &n);
    x <<= n;
    printf("x = %d", x);
    return 0;
}
