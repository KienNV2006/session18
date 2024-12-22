#include <stdio.h>
#include <string.h>

struct SinhVien{
	int id;
	char fullName[50];
	int age;
	char numberPhone[15];
};
int main(){
	struct SinhVien sv[50] = {
		{1, "Nguyen Van A",18,"0123456789"},
        {2, "Nguyen Van B",19,"0123456788"},
        {3, "Nguyen Van C",20,"0123456787"},
        {4, "Nguyen Van D",21,"0123456786"},
        {5, "Nguyen Van E",22,"0123456785"}
	};
	int n=5;
	int newId;
	
	
	printf("Nhap Id sinh vien moi: ");
	scanf("%d", &newId);
	getchar();
	sv[n].id = newId;
	
	printf("Nhap ten sinh vien moi: ");
	fgets(sv[n].fullName, sizeof(sv[n].fullName), stdin);
	sv[n].fullName[strcspn(sv[n].fullName, "\n")] = '\0';
	
	printf("Nhap tuoi sinh vien moi: ");
    scanf("%d", &sv[n].age);
    getchar(); 
    
    printf("Nhap so dien thoai sinh vien moi: ");
    fgets(sv[n].numberPhone, sizeof(sv[n].numberPhone), stdin);
    sv[n].numberPhone[strcspn(sv[n].numberPhone, "\n")] = '\0';

    n++;
    
    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].fullName);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].numberPhone);
    }
	return 0;
}