#include <stdio.h>
int n=3;
int m=3;
int print(int arr[3][3],int n,int m) {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(arr,3,3);
    return 0;
}