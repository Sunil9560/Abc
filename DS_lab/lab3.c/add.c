#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
   
    printf("enter the no. of rows and colounns for 1st matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("enter the no. of rows and colounns for 2nd matrix: ");
    scanf("%d%d",&r2,&c2);

if(r1==r2&&c1==c2){
    int a[r1][c1],b[r2][c2];
printf("enter elements:");
for(int i=0; i<r1; i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
            
         }
}
printf("enter elements:");
for(int i=0; i<r2; i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
            
         }
}
int c[r1][c1];
printf("Resultant matrix after addition:\n");
for(int i=0; i<r1; i++){
        for(int j=0;j<c1;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
           
            
         }
         printf("\n");
}

}
         else
         printf("can't added");
 return 0;
}
