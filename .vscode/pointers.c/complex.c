#include<stdio.h>
typedef struct complex
{
int real;
int imaginary;
}Com;



int main(){
    Com c1={1,2};
    printf("the value of comples no. is %d+%di ",c1.real,c1.imaginary);
return 0;
}