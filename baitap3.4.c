#include <stdio.h>
#include <math.h>
int main()
{
    float PI = 3.14;
    float r;
    printf("Nhap vao ban kinh: ");
    scanf("%f", &r);
    printf("Dien tich hinh cau = %.2f", 4 * PI * pow(r, 2));
    printf("\nThe tich hinh cau = %.2f", 4.0 / 3 * PI * pow(r, 3));
    return 0;
}