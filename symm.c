#include<stdio.h>
void main(){
    int m,n,i,j,f=0;
    printf("Enter the no of rows and column");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the %d%dth term :",i,j);
            scanf("%d",&a[i][j]);
        }
    }                
    if(m==n){
        f=1;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(a[i][j]!=a[j][i]){
                    f++;
                    break;
                }
        }
    }   
    }                              
    if(f==1){
        printf("Symmetric matrix");
    }                              
    else{
        printf("Not symmetric");
    }                       
}