#include<stdio.h>
#include "prime2.c"
void main(){
     int n,i;
    printf("Enter the length");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %dth no:",i);
        scanf("%d",&arr[i]);
    }
    prime(arr,n);
}