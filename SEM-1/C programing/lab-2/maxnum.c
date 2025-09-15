#include<stdio.h>
void mains (int a ,int b, int c){
    if(a<b && a>c){
        printf("a is big");
    }else if (b>a && b>c){
        printf("b is big");
    }else{
        printf("c is big");
    }

}
int main(){
    int a,b,c;
    printf("Enter a,b and c number :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    mains(a,b,c);
    return 0;
}