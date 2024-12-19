#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv[50] = {
        {1, "Banh mi chao",98,"0325321298"},
        {2, "Bun bo Hue",26,"0123456789"},
        {3, "Nem nuong",24,"0987654321"},
        {4, "Bun rieu cua",32,"066771508"},
        {5, "Com rang",45,"077668805"}
    };
    int n = 5;
    int searchId, found = -1;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    for (int i = 0; i < n; i++) {
        if (sv[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            fflush(stdin);
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv[i].age);
            break;
        }
    }
    if (found==-1) {
        printf("Khong tim thay sinh vien voi ID %d.\n", searchId);
    }
    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
    return 0;
}
