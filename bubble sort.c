#include <stdio.h>

int bubble( int arr[],int n) {

   for(int i=0;i<=n;i++){
       for(int j=0;j<=n-i-1;j++){
           if(arr[j]>arr[j+1]){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               
           }
       }
   }

    return 0;
}
void display(int arr[],int n){
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[]={3,2,7,1,9};
    bubble( arr,4);
    display(arr,4);
    return 0;
}