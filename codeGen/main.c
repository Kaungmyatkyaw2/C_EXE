#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PythonCode();
void JSCode();
void processFunction(char name[],char extension[],char log[]);

int main() {


while(10 == 10){



    int checkNum = 0;

    printf("Choose Language!\n Option : \n");
    printf("\tPython for 1\n");
    printf("\tJavascript for 2\n");
    printf("\t PRESS ANY KEY TO 'Exit'\n");
    scanf("%d",&checkNum);



    switch (checkNum) {
        case 1:
            PythonCode();
            printf("\nSuccessfully change!\n");
            break;


        case 2:
            JSCode();
            printf("Successfully change!\n");
            break;

        default:
            printf("Already Exit!");
            exit(0);
            break;
    }






}

    return 0;
}









void PythonCode(){

    processFunction("mainPY",".py","print");

}






void JSCode(){


    processFunction("mainJs",".js","console.log");

}





void processFunction(char name[],char extension[],char log[]) {




    char formattedFilename[64];




    int definder = 0;

    FILE *reader;

    sprintf(formattedFilename,"%s %s",name,extension);

    chooseMode:

    printf("PRESS 1 to write to print\nPRESS 2 to append to print\n");
    scanf("%d",&definder);


    if(definder == 1){

        reader = fopen(formattedFilename,"w");

        printf("****************You are in the write mode!****************\n");



        printf("What do you want to print! : ");

        char data[100];

        scanf("%s",&data);


        fprintf(reader,"%s('%s');\n",log,data);


        fclose(reader);


    }else if(definder == 2){

        reader = fopen(formattedFilename,"a");

        printf("****************You are in the append mode!****************\n");




        printf("What do you want to print! : ");

        char data[100];



        scanf("%s",&data);


        fprintf(reader,"%s('%s')\n",log,data);



        fclose(reader);

    }else{

        printf("Please Enter Key Correctly!\n");

        goto chooseMode;

    }

    fclose(reader);




}