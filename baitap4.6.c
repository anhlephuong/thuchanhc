#include<stdio.h>
#include<string.h>
int main(){
	int stt;
	char ngaythang[256];
	char tenlop[256];
	char tenmonhoc[256];
	char batdau[256];
	char ketthuc[256];
	printf("STT: ");
	scanf("%d", &stt);
	getchar();
	printf("Ngay thang: ");
	fgets(ngaythang, sizeof(ngaythang), stdin);
	ngaythang[strcspn(ngaythang, "\n")] = '\0';
	printf("Ten lop: ");
	fgets(tenlop, sizeof(tenlop), stdin);
	tenlop[strcspn(tenlop, "\n")] = '\0';
	printf("Ten mon hoc: ");
	fgets(tenmonhoc, sizeof(tenmonhoc), stdin);
	tenmonhoc[strcspn(tenmonhoc, "\n")] = '\0';
	printf("Bat dau: ");
	fgets(batdau, sizeof(batdau), stdin);
	batdau[strcspn(batdau, "\n")] = '\0';
	printf("Ket thuc: ");
	fgets(ketthuc, sizeof(ketthuc), stdin);
	ketthuc[strcspn(ketthuc, "\n")] = '\0';
	
	printf("STT\tNgay thang\tTen lop\tTen mon hoc\tBat dau\tKet thuc\n %d\t%s\t%s\t%s\t%s\t%s", stt,ngaythang, tenlop, tenmonhoc, batdau, ketthuc);

	return 0;
}
