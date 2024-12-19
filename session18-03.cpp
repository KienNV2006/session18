#include <stdio.h>
#include <string.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[20];
};

int main(){
	struct SinhVien sv1[5];
	for(int i=0; i<5; i++){
		printf("Ho va ten: ");
		fflush(stdin);
		fgets(sv1[i].name, sizeof(sv1[i].name),stdin);
		printf("Tuoi: ");
		scanf("%d", &sv1[i].age);
		printf("So dien thoai: ");
		scanf("%s", &sv1[i].phoneNumber);
	}
	for(int i=0; i<5; i++){
		printf("\nSinh vien thu %d\n", i+1);
		printf("Ho va ten: %s", sv1[i].name);
		printf("Tuoi: %d\n", sv1[i].age);
		printf("So dien thoai: %s\n", sv1[i].phoneNumber);
	}
	return 0;
}