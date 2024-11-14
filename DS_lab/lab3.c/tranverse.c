#include<stdio.h>
int main(){
    int m,n;
    printf("enter the no. of rows and colounns for 1st matrix: ");
    scanf("%d%d",&m,&n);
int a[m][n];
printf("enter elements for matrix 1 :");
for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            
         }
for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;   
         }
         
}

    return 0;
}