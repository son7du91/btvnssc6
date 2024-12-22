#include <stdio.h>
#include <math.h>

int main() {
    double tiengoc, laisuat, tienlai, tongtien;
    int sothang;
    printf("Nhập số tiền gửi ban đầu: ");
    scanf("%lf", &tiengoc);

    printf("Nhập lãi suất tháng (%%): ");
    scanf("%lf", &laisuat);

    printf("Nhập số tháng gửi: ");
    scanf("%d", &sothang);
    laisuat /= 100;
    tongtien = tiengoc * pow(1 + laisuat, sothang);
    tienlai = tongtien - tiengoc;
    printf("Tiền lãi: %.3lf\n", tienlai);
    printf("Tiền nhận được: %.3lf\n", tongtien);
    return 0;
}
