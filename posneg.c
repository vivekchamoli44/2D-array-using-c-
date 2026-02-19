#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Enter the no of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>0){
                a[i][j]=1;
            }
            else if(a[i][j]<0){
                a[i][j]=-1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}