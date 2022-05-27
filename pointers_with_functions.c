# include<stdio.h>
void address(int i){
    printf("the address is %u",&i);
}

int main(){
    int a=5;
    printf("the value of a is %d\n",a);
    address(a);
    return 0;
}