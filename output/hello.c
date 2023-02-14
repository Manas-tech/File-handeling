#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("output.txt","w");
    printf("HELLO");
    fprintf(fp,"HELLO WORLD");
    fclose(fp);
}