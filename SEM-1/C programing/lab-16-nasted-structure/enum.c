#include<stdio.h>

enum week{sunday,monday,tuesday,wenesday,thursday,friday,saturday};

void main(){

    enum week today;
    today=friday;
    printf("Day %d",today+1);
}