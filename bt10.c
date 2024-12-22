#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}
int main() {
    int n;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &n);
    if (is_prime(n)) {
        printf("%d là số nguyên tố.\n", n);
    } else {
        printf("%d không phải là số nguyên tố.\n", n);
    }
    return 0;
}
