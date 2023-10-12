#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int Throw();
int Kismet(int , int , int , int , int);
int Score(int , int , int , int , int, int);

int main()
{
    srand(time(NULL));
    
    char replay;
    int round=0;
    int i=0;
    int dice1,dice2,dice3,dice4,dice5,reThrow;
    int score,kismet,Total1,Total2;
    Total1=0;
    Total2=0;
    
    printf("WELCOME TO KISMET GAME\n");
    
    while(round++<6)
    {
                    printf("\nPlayer 1 - Round %d\n", round);
                    dice1=Throw();
                    dice2=Throw();
                    dice3=Throw();
                    dice4=Throw();
                    dice5=Throw();

                    for(i=0; i<3; i++)
                    {
                    printf("dice1= %d, dice2= %d, dice3= %d, dice4= %d, dice5= %d", dice1,dice2,dice3,dice4,dice5);

                    fflush(stdin);
                    printf("\nTo get a score please enter 's' or to throw a dice again please enter 't' (s/t)? ");
                    scanf("%c", &replay);

                    if(replay=='t')
                    {
                    printf("\nWhich dice you would like to throw again (1-5)? ");
                    scanf("%d", &reThrow);
                    if(reThrow==1)
                    dice1=Throw();
                    else if(reThrow==2)
                    dice2=Throw();
                    else if(reThrow==3)
                    dice3=Throw();
                    else if(reThrow==4)
                    dice4=Throw();
                    else if(reThrow==5)
                    dice5=Throw();
                    else
                    return 0;
                    }
                    else
                    break;
                    }
                    
                    
                    score=Score(dice1,dice2,dice3,dice4,dice5,round);
                    kismet=Kismet(dice1,dice2,dice3,dice4,dice5);
                    
                    Total1=Total1+score+kismet;
                    
                    printf("\nYour score = %d      Your kismet score = %d with a total %d!", score, kismet, Total1);
                    
                    printf("\nPlayer 2 - Round %d\n", round);
                    dice1=Throw();
                    dice2=Throw();
                    dice3=Throw();
                    dice4=Throw();
                    dice5=Throw();

                    for(i=0; i<3; i++)
                    {
                    printf("\ndice1= %d, dice2= %d, dice3= %d, dice4= %d, dice5= %d", dice1,dice2,dice3,dice4,dice5);

                    fflush(stdin);
                    printf("\nTo get a score please enter 's' or to throw a dice again please enter 't' (s/t)? ");
                    scanf("%c", &replay);

                   if(replay=='t')
                    {
                    printf("\nWhich dice you would like to throw again (1-5)? ");
                    scanf("%d", &reThrow);
                    if(reThrow==1)
                    dice1=Throw();
                    else if(reThrow==2)
                    dice2=Throw();
                    else if(reThrow==3)
                    dice3=Throw();
                    else if(reThrow==4)
                    dice4=Throw();
                    else if(reThrow==5)
                    dice5=Throw();
                    else
                    return 0;
                    }
                    else
                    break;
                    }
                    
                    
                    score=Score(dice1,dice2,dice3,dice4,dice5,round);
                    kismet=Kismet(dice1,dice2,dice3,dice4,dice5);

                    Total2=Total2+score+kismet;

                    printf("\nYour score = %d      Your kismet score = %d with a total %d!", score, kismet, Total2);

                    
                    
                    
                    
                    
                    }
        if(Total1>Total2)
                    printf("\n\nplayer 1 wins!\n");
                    else if(Total2>Total1)
                    printf("\n\nplayer 2 wins!\n");
                    else
                    printf("\n\ndraw\n");
                    
                    system("paUse");
                    return 2992;    
    
}

int Throw()
{
    return rand()%6+1;
}

int Kismet(int dice1, int dice2, int dice3, int dice4, int dice5)
{ 
  int score=0;
  if(dice1==dice2&&dice2==dice3&&dice3==dice4&&dice5==dice4)
  score=dice1*5+50;
  else if((dice1==1 || dice1==6) && (dice2==1 || dice2==6) && (dice3==1 || dice3==6) && (dice4==1 || dice4==6) && (dice5==1 || dice5==6))
  score=35;
  else if((dice1==2 || dice1==5) && (dice2==2 || dice2==5) && (dice3==2 || dice3==5) && (dice4==2 || dice4==5) && (dice5==2 || dice5==5))
  score=35;
  else if((dice1==3 || dice1==4) && (dice2==3 || dice2==4) && (dice3==3 || dice3==4) && (dice4==3 || dice4==4) && (dice5==3 || dice5==4))
  score=35;
  
  return score;
    
}
int Score(int dice1, int dice2, int dice3, int dice4, int dice5, int round)
{   int score=0;
    if(dice1==round)
    score+=round;
    if(dice2==round)
    score+=round;
    if(dice3==round)
    score+=round;
    if(dice4==round)
    score+=round;
    if(dice5==round)
    score+=round;
    return score;
}
    
