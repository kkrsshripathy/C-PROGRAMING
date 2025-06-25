//this is using module operator//
#include <stdio.h>
void main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    if(n%2==0){
    printf("even");}
    else{
    printf("odd");
}}
//without using module operator 1st//
#include <stdio.h>
void main()
{
    int n,k,m,s;
    printf("enter the no:");
    scanf("%d",&n);
    k=n/2;
    m=k*2;
    s=n-m;
    if(s==0){
    printf("even");}
    else{
    printf("odd");
}}
//without using module operator 2nd//
#include <stdio.h>
void main()
{
    int n,m;
    printf("enter the no:");
    scanf("%d",&n);
    m=n&1;
    if(m==0){
    printf("even");}
    else{
    printf("odd");
}}
//with out using if statement//
#include <stdio.h>
void main()
{
    int n,m,a;
    printf("enter the no:");
    scanf("%d",&n);
    printf("%s",(n&1==1)?"odd":"even");
}
//using the string //
#include <stdio.h>
void main()
{
    char s[10][10]={"even","odd"};
    int n=25;
    printf("%s",s[n%2]);
}