#include <stdio.h>
#include <math.h>
int main() {
    printf("Các số Armstrong có 3 chữ số là:\n");
    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;      
        int units = num % 10;             
        int armstrong_sum = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);
        if (armstrong_sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
