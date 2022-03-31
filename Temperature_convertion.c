# include<stdio.h>
float tempconv(float celsius);
int main(){
    float far =tempconv(3);
    printf("%f",far);
    return 0;
}
float tempconv(float celsius){
    float far=celsius*(9/5) +32;
    return far;
}