# include<stdio.h>

int main(){
    int i=0;
    int a;
    printf("enter limit\n");
    scanf("%d",&a);
    do{
        printf("natural no. %d\n",i+1);
        i++;
    } while (i<a);
    return 0;
}