#include <stdio.h>
int main()
{
    int a,i;
    printf("enter value of a:\n");
    scanf("%d", &a);
    for (i=1;a>=i;a--)
    {
        printf("%d\n",a);
    }
    return 0;
}