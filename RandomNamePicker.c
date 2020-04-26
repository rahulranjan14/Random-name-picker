#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(0));

    int i,num,random,choice;

    printf("Welcome to the random name picker\n");
    printf("\n");

    printf("Enter the number of Players\n");
    scanf("%d",&num);

    printf("\n");

    char collection[num][15];

    printf("Enter players name\n");

    printf("\n");

    for(i=0;i<num;i++)
    {
        printf("Enter player %d Name\n",i+1);
        scanf("%s",collection[i]);
    }

    do{
        printf("\n");
        random=rand()%num;
        printf("%s\n",collection[random]);
        printf("\n");
        printf("Enter 1 for next turn, Enter 0 to exit\n");
        scanf("%d",&choice);
    }while(choice==1);

    return 0;
}
