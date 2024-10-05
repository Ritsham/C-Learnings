#include<stdio.h>
int main(){
int arr[5]={1,45,56,87,4};
int min=arr[0];
int max=arr[0];
int sum=0;
for(int i=0;i<5;i++){
    if(arr[i]>max)
    max=arr[i];
    if(arr[i]<min)
    min=arr[i];
    sum+=arr[i];
}
printf("max=%d,min=%d,sum=%d",max,min,sum);

return 0;
}