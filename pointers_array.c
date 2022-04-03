# include<stdio.h>

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int *i,*j;
    i=&arr[1];
    j=&arr[5];
    printf("%d %d",j-i,*j-*i);
    return 0;
}
