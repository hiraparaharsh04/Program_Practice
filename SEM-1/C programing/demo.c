// #include<stdio.h>
// #include<stdlib.h>

// struct student
// {
// 	      int rno,marks;
// 	      char name[10];
// };

// int main()
// {
// 	FILE *fp;
// 	int i,n;
// 	struct student *hp;

// 	// fp=fopen("raw.txt","w");
// 	printf("\n Enter n :");
// 	scanf("%d",&n);

// 	hp =(struct student *)malloc(n*sizeof(struct student));

// 	for(i=0;i<n;i++)
// 	{
// 		printf("\n Enter Rno:");
// 		scanf("%d",&(hp+i)->rno);

// 		printf("\n Enter Name:");
// 		scanf("%s",&(hp+i)->name);

// 		printf("\n Enter Marks:");
// 		scanf("%d",&(hp+i)->marks);

// 	}
//     //    fprintf("\n \t Rno \t Name \t Marks \t");
// 	for(i=0;i<n;i++)
// 	{
// 	       fprintf("\n %d \t",(hp+i)->rno);
// 	       fprintf(" %s \t",(hp+i)->name);
// 	       fprintf(" %d \t",(hp+i)->marks);

// 	}

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rno, marks;
    char name[10];
};

int main()
{
    struct student *hp;
    int length = 10;
    // struct student hp[10];


    printf("\nEnter n: ");
    scanf("%d", &length);

    hp = malloc(length * sizeof(struct student));
    // if (hp == NULL)
    // {
    //     printf("Memory allocation failed.\n");
    //     return 1;
    // }

    for (int i = 0; i < length; i++)
    {
        printf("\nEnter Rno: ");
        scanf("%d", &(hp + i)->rno);

        printf("Enter Name: ");
        scanf("%s", (hp + i)->name); // safer with width limit

        printf("Enter Marks: ");
        scanf("%d", &(hp + i)->marks);
    }

    printf("\n\tRno\tName\tMarks\n");
    for (int i = 0; i < length; i++)
    {
        printf("\t%d\t%s\t%d\n", (hp + i)->rno, (hp + i)->name, (hp + i)->marks);
    }

    free(hp); // good practice to free dynamically allocated memory

    return 0;
}
