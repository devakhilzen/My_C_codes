# include<stdio.h>

int main(){
    int phy,maths,chem;
    float total;
    printf("enter the marks of phy\n");
    scanf ("%d",&phy);
    printf("enter the marks of maths\n");
    scanf("%d",&maths);
    printf("enter the marks of chem\n");    
    scanf("%d",&chem);
    total =(phy+maths+chem)/3;
    if ((total<40) || phy<33 || chem<33 || maths<33){
        printf("total percent is %f and you are fail\n",total);
    }
    else{
        printf("total percent is %f and you are pass\n",total);
    }

    return 0;
}