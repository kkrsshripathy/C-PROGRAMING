#include <stdio.h>
#include<math.h>
int main() {
    int ans=0;
    int factor=1;
    int n=10;
    while(n!=0){
        ans+=(n%2)*factor;
        factor=factor*10;
        n=n/2;
    }
    printf("%d",ans);
    return 0;
}