#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i > 10)
        {
            printf("the value of i is %d\n", i);
        }
        else
            printf("invalid\n");
        i++;
    }
    return 0;
}