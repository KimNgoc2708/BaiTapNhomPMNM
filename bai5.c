#include <stdio.h>

void TienDien() {
    int soDien;
    float tien = 0;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    if (soDien <= 100)
        tien = soDien * 500;
    else if (soDien <= 350)
        tien = 100 * 500 + (soDien - 100) * 550;
    else if (soDien <= 650)
        tien = 100 * 500 + 250 * 550 + (soDien - 350) * 650;
    else
        tien = 100 * 500 + 250 * 550 + 300 * 650 + (soDien - 650) * 650;


    printf("So tien phai tra: %.0f dong\n", tien);
}

int main() {
    TienDien();
    return 0;
}

