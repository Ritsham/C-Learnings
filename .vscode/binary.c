#include<stdio.h>
int main(){
int x,n,sum=1,pro1=1,terms,pro2=1;
printf("value of x");
scanf("%d",&x);
//printf("value of n");
//scanf("%d",&n);
printf("value of terms");
scanf("%d",&terms);
for(int i=0;i<=terms;i++){
    if(i%2==0){
        pro1=pro1*x;
        sum+=sum;
    }
        else
        pro2=pro1*x;
        sum-=sum;
}
printf("total sum %d",sum);
return 0;
}