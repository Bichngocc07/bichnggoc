#include <stdio.h>
 struct Student {
    char name[100];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student students[5];
    for (int i = 0; i <= 5; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);  
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar(); 
        printf("so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);  
        printf("\n");  
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("so dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
