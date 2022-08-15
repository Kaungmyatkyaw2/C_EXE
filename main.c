#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


typedef struct Bio{

    int age;
    char name[30];
    int phNumber;

}Bio;

int main(){

    char a = 'a';
    int num = 4;
    char b = 'b';
    char name[30];
    char greet[30] = "Hello";


    strcpy(name,"Zen Aku");


    printf("%d \n",sizeof(num));
    printf("%d \n",sizeof(a));
    printf("%d \n",sizeof(name));
    printf("%s \n",greet);


    printf("%d \n",&a);
    printf("%d \n",&num);
    printf("%d",&b);





    //break lesson



//
//    int passcode = 0;
//    int counter = 0;
//
//    while (10 < 20){
//
//
//
//        printf("Please enter Your Passcode!\n");
//        scanf("%d",&passcode);
//
//        if(passcode == 123){
//
//            printf("You can access this file!\n");
//
//        }else{
//            counter++;
//            printf("Wrong Passcode!\n");
//            printf("You attempt %d times!\n",counter);
//
//        }
//
//
//        if(counter == 3){
//
//            break;
//
//        }
//
//
//
//    }






//continue lesson



    int i = 0;

    for(i = 0;i<= 10;i++){

        if(i == 3 || i == 5){
            continue;
        }

        printf("%d \t",i);





    }




    Bio s1;

    s1.age = 14;
    s1.phNumber = 9941863024;
    strcpy(s1.name,"Kaung Myat Kyaw");


    printf("\nPhoneNumber : %d \n Name : %s \n Age : %d \n",s1.phNumber,s1.name,s1.age);


    Bio s2 = {12,"something",1111};

    printf("%d ",s2.age);









//    goto



//    int b = 0;
//
//
//    for(b = 0;b<7;b++) {
//
//        int mark;
//
//
//        printf("Please enter your mark!");
//        scanf("%d",&mark);
//
//        if(mark < 40){
//            goto fail;
//        }
//
//
//
//
//    }
//
//
//    fail:
//    printf("you fail in exam!");



    int pointer = 1;
    int* addressOfPointer = &pointer;


    printf("%x",addressOfPointer);
    printf("%x",&pointer);














    return 0;


}