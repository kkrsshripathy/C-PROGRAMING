#include <stdio.h>
void main(){
    int arr[]={1,5,3,8,70};
    int i=0;
    int j=4;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<=4;i++)
    printf("%d\t",arr[i]);
}