#include<stdio.h>
#include<string.h>
void main(){
    char arr[10];
    int m=0;
    printf("enetr the string:");
    scanf("%s",&arr);
   int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==arr[len-i-1]){
            m++;
        }}if(m==len){
            printf("palindrom");
        }else{
            printf("not palindrom");
        }
    }
    
