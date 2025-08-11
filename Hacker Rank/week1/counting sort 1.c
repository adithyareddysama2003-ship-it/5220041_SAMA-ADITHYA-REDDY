#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int freq[100] = {0}; 
    int value;
    int i,j;
    for ( i = 0; i < num; i++) {
        scanf("%d", &value);
        freq[value]++;
    }

    
    for (int i = 0; i < 100; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}
