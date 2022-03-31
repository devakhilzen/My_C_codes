# include<stdio.h>
int cube();

int main(){
    int num;
    printf("enter \n");
    scanf("%d",&num);
    
    printf("%d",cube());

    return 0;
}
int cube(){
    int a;
    return (a*a*a);
}