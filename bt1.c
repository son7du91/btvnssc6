#include<stdio.h>
int main(){
    int i,sum=0;
    int a[5];
    for(i=0; i<5; i++){
        printf("nhap vao so thu %d: ",i + 1);
        scanf("%d ",&a[i]);
        if(a[i] % 2 != 0){
            sum+=a[i];
        }
    printf("tong cac so la %d",sum);
    return 0;
    }
}