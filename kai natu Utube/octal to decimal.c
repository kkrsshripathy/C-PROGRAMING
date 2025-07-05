#include <stdio.h>
#include<math.h>
int main() {
    int n,p=0,r,sum=0;
printf("enter the no:");
scanf("%d",&n);
while(n>0){
    r=n%10;
    sum=sum+r*pow(8,p);
    n=n/10;
    p++;
}
printf("%d\n",sum);
    return 0;
}