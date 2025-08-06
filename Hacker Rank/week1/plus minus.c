#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int positive=0;
    int negative=0;
    int zero=0;

        if (n <= 0) {
        printf("Invalid input.\n");
        return 1;}
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive+=1;
            
        }
        else if(arr[i]<0){
            negative+=1;
        }
        else {
        zero+=1;
        }
    }
     printf("%.6f\n", (float)positive/n);
    printf("%.6f\n", (float)negative/n);
    printf("%.6f\n", (float)zero/n);
     return 0;   
}
