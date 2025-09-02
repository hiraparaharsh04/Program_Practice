#include<stdio.h>

void check(char ch){
    int star = (int)'a';
    int end = (int)'z';

    int stars = (int)'A';
    int ends = (int)'Z';
        if(star <= (int)ch && end >= (int)ch || (stars <= (int)ch && ends >= (int)ch )){
            printf("this is alphabet");
        }else{
            printf("this is not alphabet");
        }

}

int main(){
    char ch;
    printf("enter alpahbet:");
    scanf("%c",&ch);

    check(ch);
    return 0;
}