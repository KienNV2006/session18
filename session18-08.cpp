#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
void insertSv(struct SinhVien sv[], int *n, int index, struct SinhVien newSv){
	if (index < 0 || index > *n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = *n; i > index; i--) {
        sv[i] = sv[i - 1];
    }
    sv[index] = newSv;
    (*n)++;
}
int main() {
    struct SinhVien sv[50] = {
        {1, "Nguyen Van A",18,"0123456789"},
        {2, "Nguyen Van B",19,"0123456788"},
        {3, "Nguyen Van C",20,"0123456787"},
        {4, "Nguyen Van D",21,"0123456786"},
        {5, "Nguyen Van E",22,"0123456785"}
    };
    int n = 5;

    printf("Danh sach sinh vien ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }

    struct SinhVien newSv;
    int index;
    printf("\nMoi ban nhap vi tri can chen: ");
    scanf("%d", &index);
    fflush(stdin);

    printf("Moi ban nhap ID sinh vien: ");
    scanf("%d", &newSv.id);
    fflush(stdin);

    printf("Moi ban nhap ten sinh vien: ");
    fgets(newSv.name, sizeof(newSv.name), stdin);
    newSv.name[strcspn(newSv.name, "\n")] = '\0';

    printf("Moi ban nhap tuoi sinh vien: ");
    scanf("%d", &newSv.age);
    fflush(stdin);

    printf("Moi ban nhap so dien thoai sinh vien: ");
    fgets(newSv.phoneNumber, sizeof(newSv.phoneNumber), stdin);
    newSv.phoneNumber[strcspn(newSv.phoneNumber, "\n")] = '\0';

    insertSv(sv, &n, index, newSv);

    printf("\nDanh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
    return 0;
}