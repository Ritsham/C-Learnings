#include<stdio.h>
int main(){
int a,n;
printf("enter:\n");
scanf("%d",&a);
for(n=2;a>n;n++)
{
    if(a%n==0){
    printf("a is not a prime no.\n");
    break;
    }
    else
    printf("a is prime\n");
    break;
}
return 0;
}