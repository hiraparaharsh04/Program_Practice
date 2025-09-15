#include <stdio.h>
 char name[20],rollno[10];

void Gread(int s1, int s2, int s3, int s4, int s5)
{
    float pers;

    pers = (s1 + s2 + s3 + s4 + s5) / 5;

    printf("Student Name = %s\n",name);
    printf("Student Rollno = %s\n",rollno);

    if (pers > 80 && pers < 100)
    {
        printf("Distinction");
    }
    else if (pers > 60 && pers < 79)
    {
        printf("First Class");
    }
    else if (pers > 35 && pers < 59)
    {
        printf("Second Class");
    }
    else
    {
        printf("Fail 😕");
    }
}

void details(){
   

    printf("Entre student name:");
    scanf("%s" ,& name);
    printf("Entre student rollno:");
    scanf("%s" ,& rollno);
}

int main()
{
    int s1, s2, s3, s4, s5;
    float per;
    details();

    printf("Enter marks of s1,s2,s3,s4,s5:");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    scanf("%d", &s4);
    scanf("%d", &s5);

    Gread(s1, s2, s3, s4, s5);
    return 0;
}