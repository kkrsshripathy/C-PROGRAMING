#include <stdio.h>
#include<string.h>
void main()
{
    char a[100]="shri";
    char b[100]="ishr";
    int m=0,len1,len2;
    len1=strlen(a);
    len2=strlen(b);
    if(len1==len2){
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(a[i]==b[j]){
                b[j]='*';
                m++;
             break;
                }}}
                if(m==len1){
                    printf("anagram");
                }
                else
                printf("not anagram");}
        else{
                printf("not anagram");}

                }
            
        