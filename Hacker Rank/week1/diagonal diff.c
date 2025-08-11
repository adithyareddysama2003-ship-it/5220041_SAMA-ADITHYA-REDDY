#include<stdio.h>
#include <stdlib.h> 

int main() {
    int num;
    scanf("%d", &num);

    int pr_sum = 0, sr_sum = 0;
    int val;
    int i,j;

    for ( i = 0; i < num; i++) {
        for ( j = 0; j < num; j++) {
            scanf("%d", &val);

            if (i == j) {
                pr_sum += val;
            }
            if (i + j == num - 1) {
                sr_sum += val;
            }
        }
    }

    printf("%d", abs(pr_sum - sr_sum));
    return 0;
}
