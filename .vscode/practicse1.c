#include<stdio.h>
int main(){
int a,p;
printf("enter:\n");
scanf("%d",&a);
for(int i=1;i<10;i++){
p=a*i;
printf("%d\n",p);
}
return 0;
}