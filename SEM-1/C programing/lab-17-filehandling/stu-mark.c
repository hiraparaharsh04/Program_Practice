#include <stdio.h>
int main()
{

    FILE *fp;
    int n = 3, rollno, marks;
    fp = fopen("student.txt", "a");
    for (int i = 0; i < n; i++)
    {
        printf("enter roll no:");
        scanf("%d", &rollno);
        printf("enter marks:");
        scanf("%d", &marks);
        fprintf(fp, "%d\t%d\n", rollno, marks);
    }
    fclose(fp);
    return 0;
}