# include<stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};


int main(){
    struct student ak,zen,kane;
    ak.id=1;
    zen.id=2;
    kane.id=3;
    ak.marks=60;
    zen.marks=50;
    kane.marks=30;
    ak.fav_char="hulk";
    zen.fav_char="vision";
    kane.fav_char="wanda";
    printf("ak got %d marks",ak.marks);
    printf("zen got %d marks",zen.marks);
    printf("kane got %d marks",kane.marks);
    printf("ak fav character is %c",ak.fav_char);
    printf("zen fav character is %c",zen.fav_char);
    printf("kane fav character is %c",kane.fav_char);
    
    
    return 0;
}