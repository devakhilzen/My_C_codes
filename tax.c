# include<stdio.h>

int main(){
    float salary,tax=0;
    printf("enter your salary\n");
    scanf("%f",&salary);
    if (salary<250000){
        printf("no need to pay tax\n");
    }
    if (salary>250000 && salary<500000){
        tax=tax+0.05*(salary-250000);
    }
    if (salary>500000 && salary<1000000){
        tax=tax+0.20*(salary-500000);
    }
    if (salary>1000000){
        tax=tax+0.30*(salary-1000000);
    }
    printf("your tax is %f\n",tax);



    return 0;
}