#include <stdio.h>

int main() {
    int numb;
    scanf("%d", &numb);

    int num1, res = 0;
    for (int i = 0; i < numb; i++) {
        scanf("%d", &num1);
        res ^= num1;
    }

    printf("%d\n", res);
    return 0;
}
