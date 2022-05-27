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
    ak.fav_char='h';
    zen.fav_char='v';
    kane.fav_char='w';
    printf("ak got %d marks\n",ak.marks);
    printf("zen got %d marks\n",zen.marks);
    printf("kane got %d marks\n",kane.marks);
    printf("ak fav character is %c\n",ak.fav_char);
    printf("zen fav character is %c\n",zen.fav_char);
    printf("kane fav character is %c\n",kane.fav_char);
    
    
    return 0;
}