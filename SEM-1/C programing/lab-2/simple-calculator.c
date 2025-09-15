#include<stdio.h>
 void add(int a ,int b){
    int sum = a+b;
    printf("add is : %d \n)",sum);
}
void sub(int a ,int b){
    int sum = a-b;
    printf("sub is : %d \n)",sum);
}
void mul(int a ,int b){
    int sum = a*b;
    printf("mul is : %d \n)",sum);
}
void div(int a ,int b){
    int sum = a/b;
    printf("div is : %d \n)",sum);
}

 int main(){
    int a,b;
    char ch;

    printf("Enter ch :");
    scanf("%c",&ch);
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter b number :");
    scanf("%d",&b);

    if(ch == '+'){
        add(a,b);
    }
    else if(ch == '-'){
        sub(a,b);
    }
    else if(ch == '*'){
        mul(a,b);
    }
    else if(ch == '/'){
        div(a,b);
    }
    else{
        printf("invalid choise");
    }

    return 0;
 }