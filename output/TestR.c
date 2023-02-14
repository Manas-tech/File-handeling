#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("check.txt","w+");
  if(fp==0){
    printf("not found");
    return 0;
  }
  fprintf(fp,"first line\nsecond line\nthired line\nfourth line");
  fclose(fp);
    

}