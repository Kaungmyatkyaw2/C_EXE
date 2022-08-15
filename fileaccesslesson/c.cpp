#include "stdio.h"
#include "stdlib.h"


int main(){

    int num;

//    FILE  *fptr;
//    int i = 0;
//    char str[] = "We are myanmar crazy coder \n";
//
//    fptr = fopen("test.txt","w");
//
//
//
//
//    if(fptr == NULL){
//
//        printf("File cannot Open");
//
//    }else{
//        printf("FIle open success");
//
//
//        for (int i = 0;str[i] != '\n' ; i++) {
//            fputc(str[i],fptr);
//        }
//
//        fprintf(fptr,"\nHello world");
//
//    }
//
//    fclose(fptr);


//    FILE* reader;
//    char myChar[40];
//    char littleChar;
//    char code[12] = "HELLO\n";
//
//    reader = fopen("reader.txt","w+");
//
//    if(reader == NULL){
//
//        printf("Could not open this file! \n");
////        exit(0);
//
//    }else{
//
//
//        printf("Successfully file opened!\n");
//
//
////        for (int i = 0; code[i] != '\n'; i++) {
////
////            fputc(code[i],reader);
////
////        }
//
//
//    rewind(reader);
//
//        fputs("Hello world",reader);
//
//
//
//
//
//        fscanf(reader,"%s",littleChar);
//        printf("%s",littleChar);
//
//
//
//    }
//
//
//    fclose(reader);



//
//    FILE * fp;
//
//    char str1[10], str2[10], str3[10];
//    int year;
//
//    fp = fopen ("file.txt", "w+");
//    fputs("We are in 2012", fp);
//
//    rewind(fp);
//    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
//
//    printf("Read String1 |%s|\n", str1 );
//    printf("Read String2 |%s|\n", str2 );
//    printf("Read String3 |%s|\n", str3 );
//    printf("Read Integer |%d|\n", year );
//
//    fclose(fp);


char str[10];
int year;

FILE * test;

test = fopen("testing.txt","w+");
    fputc('a',test);

    fputs("We are 2022 coder",test);
    fprintf(test,"\n I'm Kaung Myat Kyaw!");
    fprintf(test,"\n I'm Learner!");

    rewind(test);
    fscanf(test,"%s",str);

    printf("%s",str);

    fclose(test);


    return 0;


}
