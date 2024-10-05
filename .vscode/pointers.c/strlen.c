#include<stdio.h>
typedef struct vector{
int i;
int j;
}V;
int main(){
    int i,j;
//printf("Write the vector %d and %d",i,j);
//scanf("%d ,%d",&i,&j);
scanf("%d",&i);
     scanf("%d",&j);
     //printf("the  vector is %di+%dj",i,j)

V v1={i,j};
printf("the vector is %di+%dj",v1.i,v1.j);


return 0;
}