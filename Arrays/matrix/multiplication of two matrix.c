#include <stdio.h>
void main() {
    int row,col;
    printf("enter the row  :");
    scanf("%d",&row);
    printf("enter the col  :");
    scanf("%d",&col);
   int a[row][col],b[row][col];
   int mul[row][col];
   printf("1 st Matrix :");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }}
        printf("2 nd Matrix :");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }}
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                         mul[i][j]=0;

        for(int k=0;k<col;k++){
           mul[i][j]+=a[i][k] *b[k][j];}
        }
        }for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         printf("%d\t",mul[i][j]);}
        printf("\n");
        }}
        