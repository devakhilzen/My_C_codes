# include<stdio.h>

int main(){
    int marks[5];
    int i,*ptr;
    ptr=&marks[0];
    for (i=0;i<=5;i++){
        printf("enter marks %d\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for (int i=0;i<=5;i++){
        printf("the value of %d is %d\n",i+1,marks[i]);

    }
    return 0;
}