#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("Enter the no.of rows & coloumns for matrix 1: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the no.of rows & coloumns for matrix 2: ");
    scanf("%d%d",&r2,&c2);

    int a[r1][c1],b[r2][c2];
    if(c1!=r2){
        printf("matrices can't multliplied\n");
        return 1;
    }
    printf("enter elements:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
        }
    printf("enter elements:");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
        }
    int c[r1][c1];
    printf("Resultant matrix after multiplication :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j] = 0; // Initialize the result matrix element
            for(int k=0;k<c1;k++){
            c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}