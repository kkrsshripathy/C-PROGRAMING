#include<stdio.h>
int main(){
    int arr[]={23,19,1,2,3};
int max1=arr[0];
int max2=-1;
for(int i=1;i<=4;i++){
if(max1<arr[i]){
    max2=max1;
    max1=arr[i];
}
else if(max2<arr[i]&& max1!=max2){
    max2=arr[i];
}}
printf("The second largest is:%d",max2);
    return 0;
}