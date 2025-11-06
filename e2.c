#include <stdio.h>

int main()
{
    int a, b, tong = 0;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
        tong += i;

    printf("Tong cac so tu %d den %d la: %d\n", a, b, tong);
    return 0;
}
