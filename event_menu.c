#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    int subch;
    while (1)
    {
        printf("1:Hackathon\n");
        printf("2:COMPUTUTSALV\n");
        printf("3:Quis content\n");
        printf("4:exit\n");
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("1:idea\n");
            printf("2:startup\n");
            printf("3:coding\n");
            printf("enter sub divice\n");
            scanf("%d",&subch);
            switch (subch)
            {   
            case 1:
                printf("registration fees=200\n");
                break;
            case 2:
                printf("registration fees=100\n");
                break;
            case 3:
                printf("registration fees=50\n");
                break;
            }
            break;
    
        case 2:
            printf("1:dance\n");
            printf("2:singing\n");
            printf("3:fashion\n");
            printf("4:theatre\n");
            printf("enter sub device\n");
            scanf("%d",&subch);
            switch(subch)
            {
            case 1:
                printf("registration fee is 100\n");
                break;
            case 2:
                printf("registration fee is 50\n");
                break;
            case 3:
                printf("registration fee is 150\n");
                break;
            case 4:
                printf("registration fee is 100\n");
                break;
            }
            break;
        case 3:
            printf("1:C\n");
            printf("2:C++\n");
            printf("3:JAVA\n");
            printf("4:PYTHON\n");
            printf("enter sub device\n");
            scanf("%d",&subch);
            switch(subch)
            {
            case 1:
              printf("registration fee is 50\n");
              break;
            case 2:
                printf("registration fee is 50\n");
                break;
            case 3:
                printf("registration fee is 50\n");
                break;
            case 4:
                printf("registration fee is 50\n");
                break;
            }
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice\n");
            break;
        }
    }

    return 0;
}