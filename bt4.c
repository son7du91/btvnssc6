#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,denta ,x1,x2,x;
    printf("a la ");
    scanf("%d", &a);
    printf("b la ");
    scanf("%d", &b);
    printf("c la ");
    scanf("%d", &c);
    denta=b*b- 4 *a * c;
    if (denta<0)
    {
        printf("vo nghiem ");
    }
    else if (denta==0)
    {
        x=-b / (4 * a);
        printf("%d",x);
    }
    else {
        x1=(-b+sqrt(denta))/(2*a);
        x2=(-b-sqrt(denta))/(2*a);
        printf("x1=%d x2=%d",x1,x2);
    }
    
    

}