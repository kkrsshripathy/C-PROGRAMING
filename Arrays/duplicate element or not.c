#include <stdio.h>
#include<stdbool.h>
bool duplicate(int arr[],int n) {
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            return true;
        }
    }return false;}
    int main(){
        int arr[]={1,2,3,4,9};
    int n=5;
    int a=duplicate(arr,n);
    if(a==1)
    printf("yes");
    else
    printf("no");
}