#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("data.text","w");
    fprintf(fp,"%d\t%s\n",10,"Harsh");
    fprintf(fp,"%d\t%s\n",10,"renil");
    fprintf(fp,"%d\t%s",10,"yashraj");
    return 0;
}