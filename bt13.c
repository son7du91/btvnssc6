#include <stdio.h>
void in_fibonacci(int n) {
    if (n <= 0) {
        printf("Số n phải lớn hơn 0.\n");
        return;
    }
    long long f1 = 0, f2 = 1;

    printf("Dãy Fibonacci với %d số đầu tiên:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%lld ", f1); 
        long long next = f1 + f2; 
        f1 = f2; 
        f2 = next;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Nhập số lượng số Fibonacci cần in: ");
    scanf("%d", &n);
    in_fibonacci(n);
    return 0;
}
