# include<stdio.h>
int fib(int n);
int main(){
    printf("%d",fib(4));
    
    return 0;
}
int fib(int n){
    if (n==1 || n==0){
        return 1;
    }
    int a=fib(n-1);
    int b=fib(n-2);
    int fibN=a+b;
    // printf("%d",fibN);
    return fibN;

}