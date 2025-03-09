#include <stdio.h>
int main()
{
    int s;
    printf("Nhap vao so giay: ");
    scanf("%d", &s);
    int h, m;
    h = s / 3600;
    m = (s % 3600) / 60;
    s = ((s % 3600) / 60) % 60;
    printf("%02d:%02d:%02d", h, m, s);
}
