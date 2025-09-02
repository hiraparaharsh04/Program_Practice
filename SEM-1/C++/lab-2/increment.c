// pre and post incerments

#include<stdio.h>

int main(){
    int x = 10;
    int p;
    // p = ++x;
    // p = x++;
    // p = --x;
    p = x--;
    printf("p= %d\n",p);
    printf("X= %d \n",x);
    return 0;
}