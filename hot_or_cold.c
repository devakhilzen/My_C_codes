# include<stdio.h>
int hot_temp();
int cold_temp();
int main(){
    int n=1;
    if (n>10){
        hot_temp();
    }
    else{
        cold_temp();
    }

    return 0;
}
int hot_temp(){
    int a;
    a=printf("its hot");
    return a;
    
}
int cold_temp(){
    int b;
    b=printf("its cold");
    return b;
}