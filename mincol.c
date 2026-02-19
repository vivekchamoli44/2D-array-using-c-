#include<stdio.h>
void main(){
    int m,n,i,j,col,min;
    printf("Enter the no of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            printf("Enter the %d%dth term :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++){
        min=a[0][j];
        for(i=0;i<n;i++){
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
        col=j+1;
        printf("The min value in col %d is %d\n",col,min);
    }
}