# include<stdio.h>

int main(){
    char g;
    int age;
    printf("enter gender\n");
    scanf("%c",&g);
    printf("enter age\n");
    scanf("%d",&age);
    
    if(g=='m'|| g=='M'){
        if(age>=18 && age<=50){
            printf("eligible\n");
        }
        else if(age>=50){
            printf("ab kya karoge shaadi krke?");
        }
        else{
            printf("not eligible\n");
        }
    }
    else if(g=='f'||'F'){
        if(age>=21){
            printf("eligible\n");
        }
        else{
            printf("not eligible\n");
        }
    }
    else{
        printf("you are not ready for marriage\n");
    }
    
    return 0;
}