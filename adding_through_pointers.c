# include<stdio.h>

int main(){
    int a,b,*ptr1,*ptr2,sum;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter a number\n");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("sum is %d",sum);

    return 0;
}