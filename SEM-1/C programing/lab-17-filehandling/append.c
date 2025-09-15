#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("data1.text","a");
    fprintf(fp,"%d\t%s\n",10,"Harsh");
    fprintf(fp,"%d\t%s\n",20,"renil");
    fprintf(fp,"%d\t%s",30,"yashraj");
    return 0;
}