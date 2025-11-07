#include <stdio.h>

int main()
{
    int a, b, c = 0;
    printf("Nhap a: ");
    scanf("%d", &a);

    b = a;

    while (b != 0)
    {
        c = c * 10 + b % 10;
        b /= 10;
    }

    if (c == a)
        printf("%d doi xung", a);
    else
        printf("%d khong doi xung", a);

    return 0;
}
