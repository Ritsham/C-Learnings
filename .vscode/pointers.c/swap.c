 #include<stdio.h>
 void swap(int *a,int *b);
 void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
     *b=temp;
 }
 int main(){
 int x=4,y=9;
 swap(&x,&y);
 printf("the new value of x is %d and y is %d",x,y);
 //printf("the value by swapping i get:",swap(int *a,int *b));
 return 0;
 }