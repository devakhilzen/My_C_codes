# include<stdio.h>
void indian();
void french();
int main(){
    char a;
    printf("indian(i) or french(f)\n");
    scanf("%c",&a);
    if(a=='i'){
        indian();
    }
    else{
        french();
    }
    return 0;
}
void indian(){
    printf("NAMASTE\n");
}
void french(){
    printf("BONJOUR\n");
}