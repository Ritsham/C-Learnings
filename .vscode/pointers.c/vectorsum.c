#include <stdio.h>

struct vector{
int i;
int j;
};
 
struct vector sumvector(struct vector v1, struct vector v2);

struct vector sumvector(struct vector v1, struct vector v2)
{
  //  struct vector v3;
      struct vector v3 ={v1.i +v2.i,v1.j + v2.j};
    printf("the vectorsum is %di+%dj", v3.i,v3.j);
    return v3;
}
     


int main()
{
    int i1, i2, j1, j2;
    printf("enter the vector1:");
    scanf("%d", &i1);
    scanf("%d", &j1);
    printf("The vector1 is %di+%dj",i1,j1);
    printf("enter the vector2:");
    scanf("%d", &i2);
    scanf("%d", &j2);
     printf("The vector2 is %di+%dj",i2,j2);
    struct vector v1 = {i1, j1};
    struct vector v2 = {i2, j2};
   
    struct vector v3=sumvector(v1, v2);
    printf("the sumvector is %di+%dj",v3.i,v3.j);

    return 0;
}