#include<stdio.h>
/*right angle triangle
*
**
***
****
*****
*/
int main(){
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
return 0;}
/*
inverted
*****
****
***
**
*
*/
#include<stdio.h>
int main(){
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-(i-1);j++){
        printf("*");
    }
    printf("\n");
}
return 0;}
/*praymid
        *
       * *
     *  *  *
    * * * * *
*/
#include<stdio.h>
int main(){
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-(i-1);j++){
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;}
/* inverted praymid
         * * * * *
          *  *  *
            * *
             *
   
*/
#include<stdio.h>
int main(){
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=1;j<=2*(n-i)-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;}
 /* *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
diamond pattern    */
#include<stdio.h>
int main(){
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int j=1;j<=(2*i)-1;j++){
        printf("*");
    }
    printf("\n");
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=1;j<=2*(n-i)-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;}