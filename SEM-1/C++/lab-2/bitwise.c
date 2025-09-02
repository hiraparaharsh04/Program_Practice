#include<stdio.h>

int main(){
    int x = 4 ,y = 3;

    //8 4 2 1
    //0 1 0 1
    //0 0 1 0

    printf("x & y = %d \n",x & y);
    printf("x | y = %d \n",x | y);
    printf("x ^ y = %d \n",x ^ y);
    printf("x << 2 = %d \n",x << 2);
    printf("x >> 2 = %d \n",x >> 2);
    return 0;
}