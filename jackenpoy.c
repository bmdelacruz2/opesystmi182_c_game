#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    printf("ROCK = 1 , PAPER = 2, and SCISSOR = 3\n");
    printf("5 rounds\n");

    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            if(choice==1){
                if(computer==1){
                    printf("You chose ROCK\n");
                    printf("    ***      \n");
                    printf("   *****     \n");
                    printf("   ******    \n");
                    printf("   *****     \n");
                    printf("    ***      \n");
                    printf("     *       \n");
                    printf("\n");
                    printf("    VS");
                    printf("\n");
                    printf("\n");
                    printf("Computer chose ROCK\n");
                    printf("    ***      \n");
                    printf("   *****     \n");
                    printf("   ******    \n");
                    printf("   *****     \n");
                    printf("    ***      \n");
                    printf("     *       \n");
                    printf("Result: Draw\n");
                    printf("\n");
                    
                    
                }
                if(computer==2){
                    printf("You chose ROCK\n");
                    printf("    ***      \n");
                    printf("   *****     \n");
                    printf("   ******    \n");
                    printf("   *****     \n");
                    printf("    ***      \n");
                    printf("     *       \n");
                    printf("\n");
                    printf("    VS");
                    printf("\n");
                    printf("\n");
                    printf("Computer chose PAPER\n");
                    printf("    ******   \n");
                    printf("   ******    \n");
                    printf("   *****     \n");
                    printf("  *****      \n");
                    printf(" *****       \n");
                    printf(" ****        \n");
                    printf("Result: Computer Wins!\n");
                    printf("\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3){
                    printf("You chose ROCK\n");
                    printf("    ***      \n");
                    printf("   *****     \n");
                    printf("   ******    \n");
                    printf("   *****     \n");
                    printf("    ***      \n");
                    printf("     *       \n");
                    printf("\n");
                    printf("    VS");
                    printf("\n");
                    printf("\n");
                    printf("Computer chose SCISSOR\n");
                    printf("  **    **   \n");
                    printf("   **  **    \n");
                    printf("    ****     \n");
                    printf("    ***      \n");
                    printf("  **   **    \n");
                    printf("  **   **    \n");
                    printf("Result: You Win\n");
                    printf("\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2){
                    if(computer==2){
                        printf("You chose PAPER\n");
                        printf("    ******   \n");
                        printf("   ******    \n");
                        printf("   *****     \n");
                        printf("  *****      \n");
                        printf(" *****       \n");
                        printf(" ****        \n");
                        printf("\n");
                        printf("    VS");
                        printf("\n");
                        printf("\n");
                        printf("Computer chose PAPER\n");
                        printf("    ******   \n");
                        printf("   ******    \n");
                        printf("   *****     \n");
                        printf("  *****      \n");
                        printf(" *****       \n");
                        printf(" ****        \n");
                        printf("Draw\n");
                        printf("\n");
                    }
                    if(computer==3){
                        printf("You chose PAPER\n");
                        printf("    ******   \n");
                        printf("   ******    \n");
                        printf("   *****     \n");
                        printf("  *****      \n");
                        printf(" *****       \n");
                        printf(" ****        \n");
                        printf("\n");
                        printf("    VS");
                        printf("\n");
                        printf("\n");
                        printf("Computer chose SCISSOR\n");
                        printf("  **    **   \n");
                        printf("   **  **    \n");
                        printf("    ****     \n");
                        printf("    ***      \n");
                        printf("  **   **    \n");
                        printf("  **   **    \n");
                        printf("Computer Wins!\n");
                        printf("\n");
                        Cscore = Cscore + 1;
                    }
                    if(computer==1){
                        printf("You chose PAPER\n");
                        printf("    ******   \n");
                        printf("   ******    \n");
                        printf("   *****     \n");
                        printf("  *****      \n");
                        printf(" *****       \n");
                        printf(" ****        \n");
                        printf("\n");
                        printf("    VS");
                        printf("\n");
                        printf("\n");
                        printf("Computer chose ROCK\n");
                        printf("    ***      ");
                        printf("   *****     ");
                        printf("   ******    ");
                        printf("   *****     ");
                        printf("    ***      ");
                        printf("     *       ");
                        printf("Computer Wins!\n");
                        printf("\n");
                        Pscore= Pscore + 1;
                    }
                }
                else if(choice==3){
                    if(computer==3){
                        printf("You chose SCISSOR\n");
                        printf("  **    **   \n");
                        printf("   **  **    \n");
                        printf("    ****     \n");
                        printf("    ***      \n");
                        printf("  **   **    \n");
                        printf("  **   **    \n");
                        printf("\n");
                        printf("    VS");
                        printf("\n");
                        printf("\n");
                        printf("Computer chose SCISSOR\n");
                        printf("  **    **   \n");
                        printf("   **  **    \n");
                        printf("    ****     \n");
                        printf("    ***      \n");
                        printf("  **   **    \n");
                        printf("  **   **    \n");
                        printf("Draw\n");
                        printf(" \n");
                    }
                    if(computer==2){
                        printf("You chose SCISSOR\n");
                        printf("  **    **   \n");
                        printf("   **  **    \n");
                        printf("    ****     \n");
                        printf("    ***      \n");
                        printf("  **   **    \n");
                        printf("  **   **    \n");
                        printf("\n");
                        printf("    VS");
                        printf("\n");
                        printf("\n");
                        printf("Computer chose PAPER\n");
                        printf("    ******   \n");
                        printf("   ******    \n");
                        printf("   *****     \n");
                        printf("  *****      \n");
                        printf(" *****       \n");
                        printf(" ****        \n");
                        printf("You Win!\n");
                        printf("\n");
                        Pscore= Pscore + 1;
                    }
                    if(computer==1){
                        printf("You chose SCISSOR\n");
                        printf("  **    **   \n");
                        printf("   **  **    \n");
                        printf("    ****     \n");
                        printf("    ***      \n");
                        printf("  **   **    \n");
                        printf("  **   **    \n");
                        printf("\n");
                        printf("    VS");
                        printf("\n");
                        printf("\n");
                        printf("Computer chose ROCK\n");
                        printf("    ***      ");
                        printf("   *****     ");
                        printf("   ******    ");
                        printf("   *****     ");
                        printf("    ***      ");
                        printf("     *       ");
                        printf("Computer Wins!\n");
                        printf("\n");
                        Cscore = Cscore + 1;

                    }
                }
        else{
            printf("Wrong Answer\n");
        }

            }
            if(Cscore > Pscore ){
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore ){
                printf("No winner it is a draw!\n");
            }



    return 0;
}

/*

This is where I got the code:
https://adv-computers-c-programs.weebly.com/rock--paper-scissors.html
*/
