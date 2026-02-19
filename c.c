#include<stdio.h>
void main(){
    int  m,n,k,t;
    printf("Enter the no rows and column:");
    scanf("%d%d",&m,&n);
    int i=0,j=m-1;
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        for(k=0;k<n;k++){
            t=a[i][k];
            a[i][k]=a[j][k];
            a[j][k]=t;
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}