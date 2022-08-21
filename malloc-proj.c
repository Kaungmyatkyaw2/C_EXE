#include "stdio.h"
#include "string.h"
#include "stdlib.h"


typedef struct student{
    int rno;
    char name[20];
    struct subject{
        int scode;
        char sname[20];
        int mark;
    }sub[3];
    int total;
    float percent;
}student;




void display();
void append();
void create();
void numForRec();
void search();
void updateInfo();
void deletes();













int main(){

    int choice = 11;


    do{
        puts("\n\n1.CREATE");
        puts("2.DISPLAY");
        puts("3.APPEND");
        puts("4.NO OF STUDENTS");
        puts("5.SEARCH OF RECORDS");
        puts("6.UPDATE INFO");
        puts("7.DELETE RECORD");
        puts("0.EXIT\n\n");


        printf("\nEnter your choice >>> ");
        scanf("%d",&choice);

        switch (choice) {


            case 0:
                exit(0);
                break;




            case 1:
                create();
                break;

            case 2:
                display();
                break;


            case 3:
                append();
                break;


            case 4:
                numForRec();
                break;

            case 5:
                search();
                break;


            case 6:
                updateInfo();
                break;


            case 7:
                deletes();
                break;







        }


    } while (10 == 10);





    return 0;

}






void display(){


student s1;
FILE *fp;

fp = fopen("students.txt","r");

    printf("*********************************************************************");
    printf("*********************************************************************\n\n\n");

    printf("\n%17s%17s","Roll","Name");
    printf("%17s","Sub1 Mark");
    printf("%17s","Sub2 Mark");
    printf("%17s","Sub3 Mark");
    printf("%17s%17s\n","Total","Percent");




    while(fread(&s1,sizeof(student),1,fp)){

        printf("\n%17d%17s",s1.rno,s1.name);
        for (int j = 0; j < 3; j++) {
            printf("%17d",s1.sub[j].mark);
        }

        printf("%17d%17.2f\n",s1.total,s1.percent);
    }

    printf("\n\n\n*********************************************************************");
    printf("*********************************************************************\n\n\n");

    fclose(fp);

};



void append(){

    system("CLS");


    student *s;
    FILE *fp;
    int n,i,j;

    printf("How many students you want : ");
    scanf("%d",&n);

    s = (student*) calloc(n,sizeof (student));
    fp = fopen("students.txt","a");

    for(i = 0;i < n;i++){

        system("CLS");

        s[i].total = 0;
        s[i].percent = 0;

        printf("Enter Roll Num : ");
        scanf("%d",&s[i].rno);


        fflush(stdin);

        printf("Enter name : ");
        scanf("%s",s[i].name);

        for (j = 0;  j<3 ; j++) {
            printf("Enter the  Marks of subject%d : ",j+1);
            scanf("%d",&s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }

        s[i].percent = s[i].total / 3.0;

        fwrite(&s[i],sizeof(student),1,fp);

    }


    fclose(fp);


};




void create(){

//    system("ClS");

    student *s;
    FILE *fp;
    int n,i,j;

    printf("How many students you want : ");
    scanf("%d",&n);

    s = (student*) calloc(n,sizeof (student));
    fp = fopen("students.txt","w");

    for(i = 0;i < n;i++){

        s[i].total = 0;
        s[i].percent = 0;

        printf("Enter Roll Num : ");
        scanf("%d",&s[i].rno);


        fflush(stdin);

        printf("Enter name : ");
        scanf("%s",s[i].name);

        for (j = 0;  j<3 ; j++) {
            printf("Enter Marks of subject%d : ",j+1);
            scanf("%d",&s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }

        s[i].percent = s[i].total / 3.0;

        fwrite(&s[i],sizeof(student),1,fp);

    }


    fclose(fp);

};






void numForRec(){


    student so;
    FILE *file;
    file = fopen("students.txt","r");
    fseek(file,0,SEEK_END);
    int n = ftell(file) / sizeof (student);
    fclose(file);

    printf("NUMBER OF ALL STUDENTS >>>> %d\n\n",n);

}





void search(){


    student stu1;
    FILE *fp;

    int roll = 0;
    int found = 1;

    printf("Enter student roll Number : ");
    scanf("%d",&roll);



    fp = fopen("students.txt","r");

    printf("*********************************************************************");
    printf("*********************************************************************\n\n\n");

    printf("\n%17s%17s","Roll","Name");
    printf("%17s","Sub1 Mark");
    printf("%17s","Sub2 Mark");
    printf("%17s","Sub3 Mark");
    printf("%17s%17s\n","Total","Percent");





    while(fread(&stu1,sizeof(student),1,fp)){

        if(roll == stu1.rno){
            printf("\n%17d%17s",stu1.rno,stu1.name);
            for (int j = 0; j < 3; j++) {
                printf("%17d",stu1.sub[j].mark);
            }

            printf("%17d%17.2f\n",stu1.total,stu1.percent);

            found = 0;
        }



    }


    if(found != 0){
        printf("\nStudent can't found\n");
    }

    printf("\n\n\n*********************************************************************");
    printf("*********************************************************************\n\n\n");

    fclose(fp);


}


void updateInfo(){



    student stu1;
    FILE *fp,*temp;

    int roll = 0;
    int found = 0;

    printf("Enter student roll Number : ");
    scanf("%d",&roll);



    fp = fopen("students.txt","r");
    temp = fopen("temp.txt","w");








    while(fread(&stu1,sizeof(student),1,fp)){

        if(roll == stu1.rno){

            stu1.total = 0;
            stu1.percent = 0;


            found = 1;



            fflush(stdin);

            printf("Enter name : ");
            scanf("%s",stu1.name);

            for (int j = 0;  j<3 ; j++) {
                printf("Enter Marks of subject%d : ",j+1);
                scanf("%d",&stu1.sub[j].mark);
                stu1.total += stu1.sub[j].mark;
            }

            stu1.percent = stu1.total / 3.0;

        }


        fwrite(&stu1,sizeof (student),1,temp);




    }

    fclose(fp);
    fclose(temp);




    if(found){

        fp = fopen("students.txt","w");
        temp = fopen("temp.txt","r");

        while (fread(&stu1,sizeof (student),1,temp)){

            fwrite(&stu1,sizeof(student),1,fp);

        }


        fclose(fp);
        fclose(temp);



    }else if(found == 0){


        printf("\nStudent can't found\n");


    }








}













void deletes(){



    student stu1;
    FILE *fp,*temp;

    int roll = 0;
    int found = 0;

    printf("Enter student roll Number : ");
    scanf("%d",&roll);



    fp = fopen("students.txt","r");
    temp = fopen("temp.txt","w");








    while(fread(&stu1,sizeof(student),1,fp)){

        if(roll == stu1.rno) {


            found = 1;

        }else{
            fwrite(&stu1,sizeof (student),1,temp);
        }









    }

    fclose(fp);
    fclose(temp);




    if(found){

        fp = fopen("students.txt","w");
        temp = fopen("temp.txt","r");

        while (fread(&stu1,sizeof (student),1,temp)){

            fwrite(&stu1,sizeof(student),1,fp);

        }


        fclose(fp);
        fclose(temp);



    }else if(found == 0){


        printf("\nStudent can't found\n");


    }








}
