#include<stdio.h>
int nnc(int a);
int nnc(int a){
    if(a==1){
        return 1;
    }
    return a+nnc(2*a-1);
}
int main(){
    int b=5;
if (b>=1){
    printf("*",nnc(b));
    b-=(2*b)-1;
}
if(b>=1){
 printf("*",nnc(b));
    b-=(2*b)-1;   
}
{
    /* code */
}



return 0;
}