#include<stdio.h>

void fahrenheit(int c){
    int f = (1.8*c) + 32 ;
    printf("fahrenheit is = %d",f);

}

void  main(){
    int c;
    printf("enter celcious = ");
    scanf("%d",&c);

    fahrenheit(c);


}
