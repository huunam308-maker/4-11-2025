#include <stdio.h>

int main() {
    int a, b = 0, c;
    printf("Nhap so N: ");
    scanf("%d", &a);

    c = a; 

    while (c != 0) {
        b = b * 10 + c % 10;
        c /= 10;                     
    }

    printf("So dao nguoc la: %d\n", b);

    return 0;
}
