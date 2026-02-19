#include<stdio.h>
void main(){
    int m,n,i,j,f=0;
    printf("Enter the no of rows and cols:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0){
                f++;
                break;
            }
        }
    }
    if(f==0){
        printf("The matrix is null matrix");
    }
    else{
        printf("The matrix is not a null matrix:");
    }
}