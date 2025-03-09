#include <stdio.h>
int main()
{
    int n, m;
    printf("Nhap vao 1 so nguyen: ");
    scanf("%d", &n);
    printf("Nhap vao 1 so nguyen: ");
    scanf("%d", &m);
    printf("Cong hai so nguyen: %d + %d = %lld\n", n, m, m + n);
    printf("Tru hai so nguyen: %d - %d = %d\n", n, m, n - m);
    printf("Nhan hai so nguyen: %d * %d = %lld\n", n, m, n * m);
    printf("Chia hai so nguyen: %d / %d = %f", n, m, (float)n / m);
}
