#include<stdio.h>
int main( ){
    int arr[5];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        
    }
    minmaxsum( arr);
    return 0;
}
void minmaxsum(int arr[]){
    long long total=0;
    int max=arr[0],min=arr[0];
    for(int i=0;i<5;i++){
        total+=arr[i];
        if(arr[i]<max){
            max=arr[i];
        }
        if(arr[i]>min){
            min=arr[i];
            }
                  
    }
    long long max_sum=total-max;
     long  long  min_sum=total-min;
    printf("%lld %lld",min_sum ,max_sum);
            
    
}
