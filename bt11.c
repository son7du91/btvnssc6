#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, count = 0, current = 2;
    printf("Nhập số lượng số nguyên tố cần in ra: ");
    scanf("%d", &n);
    printf("Các số nguyên tố đầu tiên là:\n");
    while (count < n) {
        if (is_prime(current)) {
            printf("%d ", current);
            count++; 
        }
        current++; 
    }
    printf("\n");
    return 0;
}
