#include <stdio.h>
int lin(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return arr[i];}
    }        return -1;}
int main() {
    int arr[]={2,1,5,9};
    int n=4;
    int target=9;
   int a= lin(arr,n,target);
    if(a==target)
    printf("ELEMENT EXITS is %d\n",target);
    else if(a==-1){
    printf("no element");}
    return 0;
}