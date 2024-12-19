#include <stdio.h>
#include<string.h>
struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[20];
};

int main(){
	struct SinhVien sv1;
	printf("Ho va ten: ");
	fgets(sv1.name,50,stdin);
	sv1.name[strcspn(sv1.name,"\n")]='\0';
	printf("Tuoi: ");
	scanf("%d",&sv1.age);
	getchar();
	printf("So dien thoai: ");
	fgets(sv1.phoneNumber,20,stdin);
	return 0;
}