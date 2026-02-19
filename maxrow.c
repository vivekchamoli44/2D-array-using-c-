#include<stdio.h>
void main(){
    int m,n,row,i,max,j;
    printf("Enter the no of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term:",i,j);
            scanf("%d",&a[i][j]);   
        }
    }
        for(i=0;i<m;i++){
            max=a[i][0];
            for(j=0;j<n;j++){
                if(max<a[i][j]){
                max=a[i][j];
            }
            }
        row=i+1;
        printf("The max in row %d is %d \n",row,max);
    }
}
