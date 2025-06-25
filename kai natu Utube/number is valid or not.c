#include<stdio.h>
#include<string.h>
void main(){int asc,m=0;
   char arr[100];
   printf("enter the no:");
   scanf("%s",&arr);
   int len=strlen(arr);
   for(int i=0;i<len;i++){
       asc=(int)arr[i];
       if(asc>=48 && asc<=57){
           m++;
       }}if(m==len){
       printf("valid");}
       else
          printf("invalid");
   
    }
    
