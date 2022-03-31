# include<stdio.h>

int main(){
    int a;
    int i;
    printf("enter the no\n");
    scanf("%d",&i);
    for(a=1;a<=10;a++){
        printf("%d x %d =%d \n",i,a,a*i);

    }
    return 0;
}