#include<stdio.h>
#include<string.h>
void main(){
    char a[20];
    int len,asc;
    printf("Enter the string:");
    scanf("%s",&a);
    len=strlen(a);
    for(int i=0;i<len;i++){
        asc=(int)a[i]-32;
        printf("%c",asc);
    }
}