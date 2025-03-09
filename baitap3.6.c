#include<stdio.h>
#include<string.h>
int main(){
	char tensinhvien1[256];
	char quequan1[256];
	int tuoi1;
	printf("Ten sinh vien 1: ");
	fgets(tensinhvien1, sizeof(tensinhvien1), stdin);
	tensinhvien1[strcspn(tensinhvien1, "\n")] = '\0';
	printf("Que quan: ");
	fgets(quequan1, sizeof(quequan1), stdin);
	quequan1[strcspn(quequan1, "\n")] = '\0';
	printf("Tuoi: ");
	scanf("%d", &tuoi1);
	getchar();
	char tensinhvien2[256];
	char quequan2[256];
	int tuoi2;
	printf("Ten sinh vien 2: ");
	fgets(tensinhvien2, sizeof(tensinhvien2), stdin);
	tensinhvien2[strcspn(tensinhvien2, "\n")] = '\0';
	printf("Que quan: ");
	fgets(quequan2, sizeof(quequan2), stdin);
	quequan2[strcspn(quequan2, "\n")] = '\0';
	printf("Tuoi: ");
	scanf("%d", &tuoi2);
	getchar();
	printf("Cac sinh vien da nhap vao\n");
	printf("*-----------------------------------------------*\n");
	printf("| Ten | Que quan | Tuoi |\n");
	printf("*-----------------------------------------------*\n");
	printf("|   %s|%s|%d|\n",tensinhvien1, quequan1, tuoi1);
	printf("-----------------------------------------------\n");
	printf("|   %s|%s|%d|\n",tensinhvien2, quequan2, tuoi2);
	printf("*-----------------------------------------------*\n");

			
	return 0;
}





