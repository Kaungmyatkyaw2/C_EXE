#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int weaponChecker(int yourchoice,char playerDefiner[50]);

int main(){

    int yourChoice = 0;
    srand(time(NULL));
    int computerChoice = (rand() % 3 ) + 1;
    int computerNum = 0;
    int yourNum = 0;

    printf("\n\n|------------Welcome to Rock Paper Siccsors Game!------------|\n\n");


    for (int i = 1; i < 4; i++) {



        printf("*-Chose Your Weapon!-*\n\n1.Rock\n2.Paper\n3.Scissors\n\nEnter Your Weapon : >>>");
        scanf("%d",&yourChoice);

        system("CLS");


        weaponChecker(yourChoice,"Your");
        weaponChecker(computerChoice,"Computer");


        int tester = yourChoice + 1;
        int testForComputer = computerChoice + 1;

        if(tester == 4){
            tester = 1;
        }

        if(testForComputer == 4){
            testForComputer = 1;
        }




//        printf("\n\n\n%d\n\n\n",testForComputer);

        if(computerChoice == tester){
            printf("\n\nComputer Win\n\n");
            computerNum++;
        }else if(yourChoice == testForComputer){
            printf("\n\nYou win\n\n");
            yourNum++;
        }else{
            printf("\n\nDraw\n\n");
        }




    }

    system("CLS");



    printf("COMPUTER TOTAL WIN MATCH >> %d\n\n",computerNum);
    printf("YOUR TOTAL WIN MATCH >> %d\n\n",yourNum);

    if(computerNum > yourNum){
        printf("Totally Computer Win!\n");
    }else if(yourNum > computerNum){
        printf("Totally you win!\n");
    }else{
        printf("Totally Draw");
    }



    return 0;
}



int weaponChecker(int yourchoice,char playerDefine[50]){


    switch (yourchoice) {
        case 1:
            printf("\n%s's Weapon Rock",playerDefine);
            break;


        case 2:
            printf("\n%s's Weapon Paper",playerDefine);
            break;


        case 3:
            printf("\n%s's Weapon Scissors",playerDefine);
            break;


        default:
            printf("\nPls choose valid weapon code!");
            break;


    }


}