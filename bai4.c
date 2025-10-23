#include <stdio.h>

void xeploai() {
    float van, toan, anh, diemTB;

    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &anh);

    diemTB = (van * 2 + toan * 2 + anh) / 5;

    printf("Diem trung binh: %.2f\n", diemTB);

    if (diemTB >= 8.0)
        printf("Hoc luc: Gioi\n");
    else if (diemTB >5.0 && diemTB<=7.9)
        printf("Hoc luc: Kha\n");
    else if (diemTB >= 3.0 && diemTB<=5.0)
        printf("Hoc luc: Trung binh\n");
    else
        printf("Hoc luc: Yeu\n");
}

int main() {
    xeploai(); 
    return 0;
}


