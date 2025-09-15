// seek_set
// seek_cur
// seek_end

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("data1.txt", "w");
    fputs("this is c language", fp);
    fseek(fp, 9, SEEK_SET);
    fputs(" programning", fp);

    fclose(fp);

    return 0;
}