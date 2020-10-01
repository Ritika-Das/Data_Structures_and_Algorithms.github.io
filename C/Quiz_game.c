#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   last:;
int score=0;
int ch,ch2;
int i,j,k;
char choice[20];
printf("\n____________________________________________________________");
printf("\n____________________________________________________________");
printf("\n\n\t * * * WELCOME TO ELITE QUIZ GAME CLUB * * *\n");
printf("\n____________________________________________________________");
printf("\n\t\t\t---- MAIN MENU ----");
printf("\n\n\t->  Press S to start the Quiz Game");
printf("\n\t->  Press E to Exit");
printf("\n____________________________________________________________");
printf("\n____________________________________________________________\n");


   if(toupper(getch())=='S')
   {
      {
          printf("\n\t\tINSTRUCTIONS FOR PLAYING ELITE QUIZ GAME \n");
          printf("\n\t1. There are 2 rounds in this Quiz Game.");
          printf("\n\t2. In first round You will be asked 4 questions.");
          printf("\n\t3. For each question You will be given 4 options and you have to press A, B ,C or D for the right answer.");
          printf("\n\t4. You are eligible to play the second round if you give at least 2 correct answers of questions from");
          printf("\n\t first round.");
          printf("\n\t5. Total Score will be displayed after playing round 2\n");
         printf("\n\t\tPress any key to continue or Press M to return MAIN MENU : \n");
                                    if(toupper(getch())=='M')
                                    {
                                       goto last;
                                    }
       }

      printf("\n\t\t||||   ROUND 1    ||||\n");
      printf("\n____________________________________________________________");

      for(i=1;i<=4;i++)
      {
      ch=i;
      switch(ch)
         {
         case 1:
         printf("\nQ.1)What is the name of the national animal of New Zealand?\n ");
         printf("\n\nA. Kangaroo.\t\tB. Kiwi.\nC. Tuatara.\t\tD. Yellow-eyed Penguin.\n\n ");
         printf("Select your option:- ");

         if(toupper(getch())=='B')
         {
            printf("\n\n\tB. Kiwi is correct!!! ");
            score++;

         }
         else
         {
             printf("\n\n\tWrong!!!,correct answer is B. Kiwi ");

         }
         printf("\n____________________________________________________________");
         break;
         case 2:
         printf("\nQ.2)Which team was the runner-up in FIFA 2018 World Cup?\n");
         printf("\n\nA. Croatia\t\tB. France\nC. Germany\t\tD. Brazil\n\n");
         printf("Select your option:- ");
         if(toupper(getch())=='A')
         {
            printf("\n\n\tA. Croatia correct!!! ");
            score++;
         }
         else
         {
             printf("\n\n\tWrong!!!,correct answer is A. Croatia");
         }
         printf("\n____________________________________________________________");
         break;
         case 3:
         printf("\nQ.3)Who had developed C Language? \n");
         printf("\n\nA. Andy Rubin\t\tB. Tim Berners-lee\nC. Dennis Ritchie\tD. Guido van Rossum\n\n");
         printf("Select your option:- ");
              if(toupper(getch())=='C')
                      {
                       printf("\n\n\tC. Dennis Ritchie is correct!!! ");
                       score++;
                        }
            else
                        {
                         printf("\n\n\tWrong!!!,correct answer is C. Dennis Ritchie ");
                        }
                        printf("\n____________________________________________________________");
                        break;
         case 4:
         printf("\nQ.4)Which gas is most popular as laughing gas? \n");
         printf("\n\nA. Nitric Chloride\tB. Sulphuric Oxide\nC. Zinc Chloride\tD. Nitrous Oxide\n\n");
         printf("Select your option:- ");
         if(toupper(getch())=='D')
         {
            printf("\n\n\tD. Nitrous Oxide correct!!! ");
            score++;
         }
         else
         {
             printf("\n\n\tWrong!!!,correct answer is D. Nitric Oxide ");
         }
         printf("\n____________________________________________________________");
         break;
         }
      }

         if(score>=2)
         {
            printf("\n____________________________________________________________");
            printf("\n\tCongrats You are eligible for Second Round !!!\n");
            printf("\t\tSCORE:  %d ",score);
            printf("\n\n\tTo continue press C\n");
            if(toupper(getch())=='C')
                     {
                        printf("\n____________________________________________________________");
                        printf("\n\t\t||||   ROUND 2    ||||");
                        printf("\n____________________________________________________________");

                              for(j=1;j<=12;j++)
                              {
                                    ch2=j;
                                 switch(ch2)
                                 {
                                 case 1:
                                 printf("\nQ.5)Who was the First Lady of USA? \n");
                                 printf("\n\nA. Hillary Washington\t B. Michelle Obama\nC. Martha Washington\t D. Hillary Clinton\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='C')
                                 {
                                    printf("\n\n\tC. Martha Washington is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is C. Martha Washington ");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 2:
                                 printf("\nQ.6)What is the SI unit of current? \n");
                                 printf("\n\nA. Ampere\tB. Coulomb\nC. Watt\t\tD. voltage\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='A')
                                 {
                                    printf("\n\n\tA. Ampere is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is A. Ampere ");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;

                                 case 3:
                                 printf("\nQ.7)Which of the following is a Palindrome number\n");
                                 printf("\n\nA. 23232\t\tB. 101010\n\nC. 42042\t\tD. 01234\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='A')
                                 {
                                    printf("\n\n\tA. 23232 is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is A. 23232.");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 4:
                                 printf("\nQ.8)Among the following elements,which one is essential for the transmission of impulsesin the nerve fibre? \n");
                                 printf("\n\nA. Zinc\t\tB. Iron\nC. Sodium\tD. Calcium\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='D')
                                 {
                                    printf("\n\n\tD. Calcium is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is  D. Calcium");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 5:
                                 printf("\nQ.9)The Renaissance scientist who explained how planets move around the sun? \n");
                                 printf("\n\nA. Kepler\t\tB. Rabelais\nC. Francis Bacoor\tD. Gutenberg\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='A')
                                 {
                                    printf("\n\n\tA. Kepler is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is  A. Kepler");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 6:
                                 printf("\nQ.10)Which of the following is an enzyme? \n");
                                 printf("\n\nA. Glucagon\tB. Insulin\nC. Somatotropin\tD. Trypsin\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='D')
                                 {
                                    printf("\n\n\tD. Trypsin is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is D. Trypsin ");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 7:
                                 printf("\nQ.11)Who is known as father of Modern Medicine? \n");
                                 printf("\n\nA. Euclid\tB. Pythagoras\nC. Hippocrates\tD. Eratosthenes\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='C')
                                 {
                                    printf("\n\n\tC. Hippocrates is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is C. Hippocrates ");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 8:
                                 printf("\nQ.12)When did World War 2 started? \n");
                                 printf("\n\nA. 1937\t\tB. 1939\nC. 1938\t\tD. 1940\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='B')
                                 {
                                    printf("\n\n\tB. 1939 is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is B. 1939 ");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 9:
                                 printf("\nQ.13)What is the capital of Netherlands? \n");
                                 printf("\n\nA. Paris\tB. Amsterdam\nC. Hague\tD. Venice\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='B')
                                 {
                                    printf("\n\n\tB. Amsterdam is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is B. Amsterdam");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 10:
                                 printf("\nQ.14)Which team won the ODI World Cup 2007? \n");
                                 printf("\n\nA. Australia\tB. India\nC. Sri Lanka\tD. England\n\n");
                                 printf("Select your option:- ");
                                 if(toupper(getch())=='A')
                                 {
                                    printf("\n\n\tA. Australia is correct!!! ");
                                    score++;
                                 }
                                 else
                                 {
                                     printf("\n\n\tWrong!!!,correct answer is  A. Australia");
                                 }
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 11:
                                 printf("\n\n\t\tTOTAL SCORE :   %d",score);
                                 printf("\n____________________________________________________________");
                                 printf("\n____________________________________________________________");
                                 break;
                                 case 12:
                                    printf("\n\tPress M for MAIN MENU\n");
                                    if(toupper(getch())=='M')
                                    {
                                       goto last;
                                    }

                           }
               }
         }
}
                           else
                           {
                              printf("\n\n\tSorry You are not eligible for next round !!!!\n");
                              printf("\tYour score is :   %d",score);
                           }


   }
return 0;

   }





