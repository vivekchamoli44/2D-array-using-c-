#include<stdio.h>
void main(){
    int m,n,i,j,minp,maxp,maxs,mins;
    printf("Enter the no of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        minp=a[0][0];
        maxp=a[0][0];
        for(j=0;j<n;j++){
            if(maxp<a[i][j]){
                maxp=a[i][j];
            }
            if(minp>a[i][j]){
                minp=a[i][j];
            }
        }
    }
    maxs=a[0][n-1];
    mins=a[0][n-1];
    for(i=0,j=n-1;i<m;i++,j--){
        if(maxs<a[i][j]){
            maxs=a[i][j];
        }
        if(mins>a[i][j]){
            mins=a[i][j];
        }
    }
    printf("for principal diagonal\n max=%d,min=%d\n",maxp,minp);
    printf("for secondary diagonal\n max=%d,min=%d\n",maxs,mins);
}