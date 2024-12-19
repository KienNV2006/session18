#include <stdio.h>

	struct SinhVien{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	
int main(){
	struct SinhVien sv1={"Nguyen Van Kien",18,"0346746521"};
	printf("Ho va ten: %s\n", sv1.name);
	printf("Tuoi %d\n", sv1.age);
	printf("So dien thoai %s", sv1.phoneNumber);
	return 0;
}