#include <stdio.h>

int main(){
    int arr[]={1,2,3,5,8};
    int max=arr[0];
    for(int i=0;i<=4;i++){
    if(max<arr[i]){
               max=arr[i];
           }
        }
        printf("\n");
        printf("The gratest num is:%d",max);
    return 0;
}