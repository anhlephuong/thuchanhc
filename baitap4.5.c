#include<stdio.h>
#include<string.h>
int main(){
	char tensinhvien[256];
	char MSSV[256];
	char dob[20];
	char tenkhoa[256];
	char tennganh[256];

	printf("Ten sinh vien: ");
	fgets(tensinhvien, sizeof(tensinhvien), stdin);
	printf("MSSV: ");
	scanf("%s", MSSV);
	printf("Ngay/Thang/Nam sinh: ");
     	scanf("%s", dob);
	getchar();
	printf("Ten khoa: ");
	fgets(tenkhoa, sizeof(tenkhoa), stdin);
	printf("Ten nganh: ");
	fgets(tennganh, sizeof(tennganh), stdin);
	tensinhvien[strcspn(tensinhvien, "\n")] = '\0';
	printf("\nTen sinh vien %s", tensinhvien);
	printf("\nMSSV %s", MSSV);
	printf("\nNgay/Thang/Nam sinh %s", dob);	
	tenkhoa[strcspn(tenkhoa, "\n")] = '\0';
	printf("\nTen khoa %s", tenkhoa);
	tennganh[strcspn(tennganh, "\n")] = '\0';
	printf("\nTen nganh %s", tennganh);
	
	return 0;
}
