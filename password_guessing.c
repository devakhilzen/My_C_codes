#include <stdio.h>
int main()
{
    int password = 123;
    int guess;
    int counter = 0;

    while (counter < 3)
    {
        printf("enter\n");
        scanf("%d", &guess);
        if (password != guess)
        {
            printf("wrong password\n");
        }
        else
        {
            printf("right password\n");
            break;
        }

        counter++;
    }
    if (password == guess)
    {
        printf("u guessed it in %d times", counter);
    }
    else
    {
        printf("Try next Time\n");
    }

    return 0;
}