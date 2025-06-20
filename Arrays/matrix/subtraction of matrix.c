#include <stdio.h>
void main() {
    int n,ele;
    printf("enter the no :");
    scanf("%d",&n);
   int a[n][n],b[n][n],c[n][n];
   printf("First matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }}
    printf("Secound matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }printf("Subtraction of the matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j];
            printf("%d",c[i][j]);
        }printf("\n");
        }}