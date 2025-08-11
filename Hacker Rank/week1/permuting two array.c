#include <stdio.h>

int segments(int choco[], int size, int targetSum, int len) {
    int Count = 0;

    for (int i = 0; i <= size - len; i++) {
        int tempSum = 0;
        for (int j = 0; j < len; j++) {
            tempSum += choco[i + j];
        }
        if (tempSum == targetSum) {
            Count++;
        }
    }

    return Count;
}

int main() {
    int bites;
    scanf("%d", &bites);

    int bar[bites];
    for (int i = 0; i < bites; i++) {
        scanf("%d", &bar[i]);
    }

    int day, month;
    scanf("%d %d", &day, &month);

    printf("%d\n", segments(bar, bites, day, month));

    return 0;
}
