#include <stdio.h>
void in_cung_hoang_dao(int ngay, int thang) {
    if ((thang == 1 && ngay >= 20) || (thang == 2 && ngay <= 18)) {
        printf("Bảo Bình\n");
    } else if ((thang == 2 && ngay >= 19) || (thang == 3 && ngay <= 20)) {
        printf("Song Ngư\n");
    } else if ((thang == 3 && ngay >= 21) || (thang == 4 && ngay <= 19)) {
        printf("Bạch Dương\n");
    } else if ((thang == 4 && ngay >= 20) || (thang == 5 && ngay <= 20)) {
        printf("Kim Ngưu\n");
    } else if ((thang == 5 && ngay >= 21) || (thang == 6 && ngay <= 21)) {
        printf("Song Tử\n");
    } else if ((thang == 6 && ngay >= 22) || (thang == 7 && ngay <= 22)) {
        printf("Cự Giải\n");
    } else if ((thang == 7 && ngay >= 23) || (thang == 8 && ngay <= 22)) {
        printf("Sư Tử\n");
    } else if ((thang == 8 && ngay >= 23) || (thang == 9 && ngay <= 22)) {
        printf("Xử Nữ\n");
    } else if ((thang == 9 && ngay >= 23) || (thang == 10 && ngay <= 23)) {
        printf("Thiên Bình\n");
    } else if ((thang == 10 && ngay >= 24) || (thang == 11 && ngay <= 22)) {
        printf("Bọ Cạp\n");
    } else if ((thang == 11 && ngay >= 23) || (thang == 12 && ngay <= 21)) {
        printf("Nhân Mã\n");
    } else if ((thang == 12 && ngay >= 22) || (thang == 1 && ngay <= 19)) {
        printf("Ma Kết\n");
    } else {
        printf("Ngày tháng không hợp lệ.\n");
    }
}
int main() {
    int ngay, thang;
    printf("Nhập ngày sinh: ");
    scanf("%d", &ngay);
    printf("Nhập tháng sinh: ");
    scanf("%d", &thang);
    printf("Cung hoàng đạo của bạn là: ");
    in_cung_hoang_dao(ngay, thang);
    return 0;
}
