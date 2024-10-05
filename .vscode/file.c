#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("ritesh.txt","w");
int num=787;

fprintf(fptr,"%d",num);

fclose(fptr);
return 0;
}