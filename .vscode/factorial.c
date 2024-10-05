#include<stdio.h>
int Fibonacci(int a);
int Fibonacci(int a){
    if(a==0){
        return 0;
    }
    else if(a==1)
    return 1;
    return Fibonacci(a-1)+Fibonacci(a-2);
}
int main(){
int b=5;
printf("%d\n",Fibonacci(b));
return 0;
}