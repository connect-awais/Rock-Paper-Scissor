#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void main()
{
    int user_choice,computer_choice;
    char *option[]={"Rock","Paper","Scissors"};
    char play_Again;

    srand(time(0));

    do
    {
    printf("Choose:\n1.Rock\n2.Paper\n3.Scissors:");
    printf("\nEnter your choice (1-3):");
    scanf("%d",&user_choice);

    computer_choice=rand() % 3+1;

    printf("You chose : %s\n",option[user_choice - 1]);
    printf("Computer chose : %s\n",option[computer_choice-1]);

    if(user_choice==computer_choice)
    {
        printf("It's a Tie!\n");
    }
    else if((user_choice==1 && computer_choice==3) || (user_choice==2 && computer_choice==1) || (user_choice==3 && computer_choice==2))
    {
        printf("You Win!\n");
    }

    else
    {
    printf("You Lose!\n");
    }

    printf("Do you want to play again? (y/n):");
    scanf(" %c",&play_Again);
    }

    while(play_Again=='y' || play_Again=='Y');
    
    getch();
}