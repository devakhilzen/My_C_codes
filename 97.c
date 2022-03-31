# include<stdio.h>

int main(){
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%97==0){
        printf("%d is divisible",a);
    }
    else{
        printf("%d is  indivisible",a);
    }
    return 0;
}