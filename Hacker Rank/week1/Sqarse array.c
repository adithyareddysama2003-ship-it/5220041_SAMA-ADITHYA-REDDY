#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_SIZE 1000

int main() {
    int numStrings, numQueries;
    scanf("%d", &numStrings);

    char input[MAX_SIZE][MAX_LEN];
    for (int i = 0; i < numStrings; i++) {
        scanf("%s", input[i]);
    }

    scanf("%d", &numQueries);
    char queries[MAX_SIZE][MAX_LEN];
    for (int i = 0; i < numQueries; i++) {
        scanf("%s", queries[i]);
    }

    for (int i = 0; i < numQueries; i++) {
        int frequency = 0;
        for (int j = 0; j < numStrings; j++) {
            if (strcmp(queries[i], input[j]) == 0) {
                frequency++;
            }
        }
        printf("%d\n", frequency);
    }

    return 0;
}
