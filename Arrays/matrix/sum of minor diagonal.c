#include <stdio.h>
void main() {
    int n,ele;
    printf("enter the no :");
    scanf("%d",&n);
   int a[n][n],sum=0;
   printf("Matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i+j==n-1){
            sum=sum+a[i][j];}}
        }
        printf("The sum of main diagonal is:%d",sum);
        printf("\n");
        }