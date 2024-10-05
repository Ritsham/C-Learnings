#include<stdio.h>
int main(){
int a,b;
char opr;
printf("Enter the numbera a: ");
scanf("%d",&a);
printf("Enter the numbera b ");
scanf("%d",&b);
printf("Enter the operation you want to perform (+,-,*,%)");
scanf(" %c",&opr);
switch(opr){
    case '+':
    printf("The sum of number is %d",a+b);
    case '-':
    printf("The difference of number is %d",a-b);
    case '*':
    printf("The product of number is %d",a*b);
    case '/':
    printf("The division of number is %f",(float)a/b);
    case '%':
    printf("The remainder of number is %d",a%b);
   // default:
    //printf("Invalid");
}
return 0;
}