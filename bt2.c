#include<stdio.h>
int main(){
    int chan=0, le=0;
    int a[5];
    for(int i=0; i<5; i++){
        printf("nhap vao so %d: ",i + 1);
        scanf("%d ",&a[i]);
        if(a[i] % 2 != 0){
            le++;
        }
        else if (a[i] % 2 ==0)
        {
            chan++;
        }
    }
    printf("tong so chan la %d:",chan);
    printf("tong so le la %d:",le);

    return 0;
}