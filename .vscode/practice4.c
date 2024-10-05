#include<stdio.h>
int main(){
int x,n,product =1;
int sum =1;
printf("Enter the number of terms",n);
scanf("%d",&n);
printf("Enter the number of x",x);
scanf("%d",&x);
for(int i=1;i<n;i++){
product=product*x;
sum=sum+product;
}
printf("Ther total sum is %d",sum);
return 0;
}