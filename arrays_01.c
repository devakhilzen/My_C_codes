# include<stdio.h>

int main(){
    float avg,sum=0;
    int i;
    float marks[5];
    for (i=0;i<=4;i++){
        printf("enter marks\n");
        scanf("%f",&marks[i]);
    }
    for (i=0;i<=5;i++){
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("average marks=%f\n",avg);
    return 0;
}