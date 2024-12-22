#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void deleteSv(struct sinhVien sv[], int *n, char deleteName[]) {
    int flag = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(sv[i].name, deleteName) == 0) {
            flag = 1;
            for (int j = i; j < *n - 1; j++) {
                sv[j] = sv[j + 1];
            }
            (*n)--;
            printf("Xoa sinh vien thanh cong\n");
            return;
        }
    }
    if (flag==-1) {
        printf("Sinh vien khong ton tai\n");
    }
}

int main() {
    struct sinhVien sv[50] = {
        {1, "Nguyen Van A",18,"0123456789"},
        {2, "Nguyen Van B",19,"0123456788"},
        {3, "Nguyen Van C",20,"0123456787"},
        {4, "Nguyen Van D",21,"0123456786"},
        {5, "Nguyen Van E",22,"0123456785"}
    };
    int n = 5;
    char deleteName[50];
    printf("Nhap ten sinh vien can xoa: ");
    fflush(stdin);
    fgets(deleteName, sizeof(deleteName), stdin);
    deleteName[strcspn(deleteName, "\n")] = '\0';
    deleteSv(sv, &n, deleteName);
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
    return 0;
}

