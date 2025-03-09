#include <stdio.h>
#include <string.h>
int main(){
	char a[256],d[256];
	float b;
	int c;
	float tongtien;
	float tienphaitra;
	float vat;
	printf("Ten sach: ");
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	printf("Gia sach: ");
	scanf("%f",&b);
	printf("So luong mua: ");
	scanf("%d",&c);
	getchar();
	printf("Ma sach: ");
	fgets(d, sizeof(d), stdin);
	d[strcspn(d, "\n")] = '\0';
	tongtien = b * c; 
       	vat = tongtien * (5.0/100);
	tienphaitra = vat + tongtien;
	printf("BK Bookseller\n\n");
	printf("Qty\tISBN\tTitle\t\t\t\tPrice\tTotal\n");
	printf("%d\t%s\t%s\t%f\t%f\n",c,d,a,b,tongtien);
	printf("VAT %f\n",vat);	
	printf("You pay: %f\n",tienphaitra);

	return 0;
}

