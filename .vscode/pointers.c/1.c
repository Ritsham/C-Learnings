#include<stdio.h>
int sum(int *a ,int *b);
int sum(int *a ,int *b){
   // printf("%d",a+b);
   *a=8;
    return *a+*b;
}
int main(){
int x=5,y=4;
int c =sum(5,4);
printf("the sum of %d  and %d is %d\n",&x,&y,c);
printf("the value of x is %d",&x);
return 0;
}