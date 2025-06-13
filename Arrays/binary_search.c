#include <stdio.h>
int binarysearch(int arr[],int tar,int l,int r){
    int mid=l+(r-l)/2;
    if(l>r)return -1;
    if(arr[mid]==tar)
    return mid;
    else if(arr[mid]>tar){
        return binarysearch(arr,tar,l,mid-1);
    }
    else{
        return binarysearch(arr,tar,mid+1,r);
    }
}
int main() {
    int arr[]={1,2,3,4,5,6};
    int tar=1;
    int index=binarysearch(arr,tar,0,5);
    printf("THe VALUE:%d\n",arr[index]);
    printf("INDEX:%d\n",index);
    return 0;
}