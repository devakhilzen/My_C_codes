# include<stdio.h>
# include<math.h>
int get_digits();
int is_armstrong();
int main(){
    // printf("%d",get_digits(1347896));
    int i;
    for (i=1;i<=4000;i++){
        if (is_armstrong(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
int get_digits(int n){
    int count=0;
    while (n>0){
        n=n/10;
        count++;

    }
    return count;

}
int is_armstrong(int n){
    int sum=0;
    int count=get_digits(n);
    int temp=n;
    while (n>0){
        sum=sum+pow(n%10,count);
        n=n/10;
    }
    return temp==sum;
}