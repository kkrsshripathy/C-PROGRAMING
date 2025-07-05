#include <stdio.h>
#include<math.h>
int main() {
    int n,m,r,sum=0;
for(int i=1;i<=1000;i++){
 m=i;
 if(m<=9){
     printf("%d\n",m);
 }
 else{
     sum=pow(m%10,3)+pow((m%100-m%10)/10,3)+pow((m%1000-m%100)/100,3);
     if(sum==i){
         printf("%d\n",i);
     }
      }
}
    return 0;
}