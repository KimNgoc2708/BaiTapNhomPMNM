#include <stdio.h>
#include "mylib.h"

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Giai phuong trinh bac 2\n");
        printf("2. Tinh diem trung binh\n");
        printf("3. Tinh tien dien\n");
        printf("4. In bang cuu chuong\n");
        printf("5. Tinh giai thua\n");
        printf("6. In tam giac so\n");
        printf("7. Kiem tra nhap tuan tu\n");
        printf("8. In day Fibonacci\n");
        printf("9. In hinh sao\n");
        printf("0. Thoat\n");
        printf("================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: giaiPTBacHai(); break;
            case 2: diemTB(); break;
            case 3: tienDien(); break;
            case 4: cuuChuong(); break;
            case 5: giaiThua(); break;
            case 6: tamGiacSo(); break;
            case 7: nhapTuanTu(); break;
            case 8: fibonacci(); break;
            case 9: hinhSao(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);
    
    return 0;
}