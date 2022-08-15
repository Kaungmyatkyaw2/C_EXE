#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void checker(constant) {

    if(constant == 1){

        printf("You can play again now!\n");

    }else{

        printf("Good Bye!");
        exit(0);

    }

}


int main(){







    int age = 0;
    int id = 0;
    int money = 0;//user pay money
    int number = 0;
    int num = 0;
    int smoney = 0;//user show money
    int num2 = 0;

    printf("***********Welcome to our lottery Game*********** \n");


    printf("Enter your age!\n");
    scanf("%d",&age);


    if(age > 17){

        printf("Please Show Money:__\n");
        scanf("%d",&smoney);
        printf("This is your show money %d\n",smoney);

        while(age > 17){

            printf("Please Enter Your ID!\n");
            scanf("%d",&id);

            while(id == 111){

                printf("Please enter your money : \n must be more than 1000Ks:");
                scanf("%d",&money);

                while(money > 999){

                    printf("Please enter your number:");
                    scanf("%d",&number);

                    if(number == 123){

                        smoney = smoney - money;

                        smoney = smoney + (money * 10);

                        printf("You win in lottery\n");
                        printf("That's your money now : %d\n",smoney);
                        printf("If you want to play again Press 1!\n");
                        printf("If you want to quit game Press 2\n");
                        scanf("%d",&num);


                        checker(num);


                    }else{

                        printf("### TRY AGAIN!###\n");
                        printf("If you want to play again Press 1!\n");
                        printf("If you want to quit game Press 2\n");
                        scanf("%d",&num2);


                        checker(num2);




                        smoney = smoney - money;
                        printf("This is your remain money:%d\n",smoney);


                        if(smoney < 1000){
                            printf("Try More!\nYou doesn't have enough money!:%d",smoney);
                            exit(0);
                        }



                    }








                }
            }

        }

    }else{

        printf("You can't play game!");

    }











    return 0;


}