#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("ritesh.txt","r");

char ch;


while(1){
ch=fgetc(fptr);
printf("%c",ch);
if(ch==EOF){
    break;
}
}




return 0;
}