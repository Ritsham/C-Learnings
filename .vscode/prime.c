#include<stdio.h>
#include<math.h>
int primenumber(int a){

int j=sqrt(a);
for (int i = 2; i <= j; i++)
{
    if (a%i==0){
        printf("it is a not prime number");
        return 0;
    }
    else 
        printf("it is  a prime number ");
        return 1;
    

    }

return 0;
}



int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    primenumber(n);


return 0;
}