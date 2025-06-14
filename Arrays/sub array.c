#include <stdio.h>
void main(){int n=5;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int z=i;z<=j;z++)
    printf("%d",arr[z]);
    printf("\n");
        }
        printf("\n");
    }
}