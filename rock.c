#include<stdio.h>
#include<conio.h>
int you,Computer;           //global declaration
int menu()
{
    int ch;
    printf("\n 1. Rock");
    printf("\n 2. Paper");
    printf("\n 3. Scissor");
    printf("\n 4. Exit");
    printf("\n Enter your Choice");
    scanf("%d",&ch);
    return(ch);
}
void setup()
{
    label:
              Computer=rand()%4;
              if(Computer==0)
                goto label;
                you=menu();
}
void MakeLogic()
{
    switch(you)
    {
    case 1:
                 if(Computer==1)    //you=rock,Computer=rock
                 {
                    printf("Game Draw");
                    printf("\n You=Rock \n Computer=Rock");
                 }
                else if(Computer==2)  //you=rock,Computer=paper
                 {
                     printf("Computer Won");
                     printf("\n You=Rock \n Computer=Paper");
                 }
                 else                               //you=rock,Computer=scissor
                 {
                     printf("You Won");
                     printf("\n You=Rock \n Computer=Scissor");
                 }
                break;
    case 2:
                if(Computer==1)  //you=paper,Computer=rock
                {
                      printf("You Won");
                      printf("\n You=Paper \n Computer=Rock");
                }
                else if(Computer==2)  //you=paper,Computer=paper
                {
                    printf("GameDraw");
                    printf("\n You=Paper \n Computer=Paper");
                }
                else                               //you=paper,Computer=scissor
                {
                   printf("Computer Won");
                   printf("\n You=Paper \n Computer=Scissor");
                }
                break;
    case 3:
                if(Computer==1)      //you=scissor,Computer=rock
                {
                    printf("Computer Won");
                    printf("\n You=Scissor \n Computer=Rock");
                }
                else if(Computer==2)    //you=scissor,Computer=paper
                {
                     printf("You Won");
                     printf("\n You=Scissor \n Computer=Paper");
                }
                else                                //you=scissor,Computer=scissor
                {
                     printf("Game Draw");
                     printf("\n You=Scissor \n Computer=Scissor");
                }
                break;
    case 4:
                exit (0);
                break;
    default:
	             printf("Invalid Option");            
    }
}
int main()
{
    while(1)
    {
        system("cls");
        setup();
        MakeLogic();
        getch();
    }
    return 0;
}

