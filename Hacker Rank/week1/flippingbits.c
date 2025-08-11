#include<stdio.h>
unsigned int flipping(unsigned int num){
    
    return num ^ 0xFFFFFFFF;
    
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        unsigned int num;
        scanf("%u",&num);
        printf("%u\n", flipping(num));
    }
    
    return 0;
    
}

