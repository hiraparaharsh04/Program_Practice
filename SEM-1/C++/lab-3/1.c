#include<stdio.h>

int sum(int a ,int b){
    return a+b;

}
int main(){

    int a,b;
    printf("Enter a,b:");
    scanf("%d",&a);
    scanf("%d",&b);

    int ans = sum(a,b);

    printf("ans = %d",ans);
    return 0;
}