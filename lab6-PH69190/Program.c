#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int a=0,[n];       
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int tong = 0, dem = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            tong += a=0,[i];
            dem++;
        }
    }
    if (dem == 0) {
        printf("Khong co so chia het cho 3 trong mang.\n");
    }
    else {
        float tb = (float)tong / dem;
        printf("Trung binh cac so chia het cho 3 = %.2f\n", tb);
    }

    return 0;
}