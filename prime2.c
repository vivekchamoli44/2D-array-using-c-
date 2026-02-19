int rev(int);
void prime(int arr[],int n){
    int i,j,c=0;
    for(i=0;i<n;i++){
        c=0;
        for(j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                c++;
            }
        }
        if(c==0){
            if(arr[i]%10==rev(arr[i])%10){
                printf("%d ",arr[i]);
            }
        }
    }
    
}
int rev(int n){
    int i,sum=0,r;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}