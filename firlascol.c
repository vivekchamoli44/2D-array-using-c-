#include<stdio.h>
void main(){
    int m,n,i,j,k,t;
    printf("Enter the no of rows and cols:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0,j=0,k=n-1;i<m;i++){
        t=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=t;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}