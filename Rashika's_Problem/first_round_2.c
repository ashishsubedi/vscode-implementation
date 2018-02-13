#include<stdio.h>
int main(){
    int t,i,j;
    long int n,ti;
    scanf("%d",&t);
    while(t--){
        scanf("%ld",&n);
        
        long int a[n];
        for(i = 0; i<n; i++){
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    long int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp  ;
                }
            }
        }
        for(i=0;i<n; i+=2){
            if(a[i]!= a[i+1]){
                printf("%ld",a[i]);
                break;
            }
        }


    }
}