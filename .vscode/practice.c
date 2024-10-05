#include<stdio.h>
#include<math.h>
int main(){
int n,a,sum=0;
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the value of power");
scanf("%d",&a);
for (int i = 1; i <=n;i++)
{
    if(i%2==0){
        sum-=pow(i,a);
    }
    else
    sum+=pow(i,a);
}
printf("The total sum is %d",sum);


return 0;
}