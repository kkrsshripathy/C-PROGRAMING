#include<stdio.h>
int issort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
        return 0;}
    }return 1;
}
int main(){
    int arr[]={1,2,3};
int res=issort(arr,3);
if(res==0){
    printf("IT is NOT in sorted order");
}
else{
    printf("IT is SORTED order");
}

    return 0;
}