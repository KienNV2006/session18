#include <stdio.h>
#include <stdio.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        sv[i].id = i + 1;
        printf("Nhap thong tin sinh vien thu %d:\n", sv[i].id);
        printf("Nhap ten: ");
        fflush(stdin);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", sv[i].phoneNumber);
    }
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", sv[i].id);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
    return 0;
}