#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower()

int main() {
    char s[1000];
    // Read the whole line (including spaces)
    fgets(s, sizeof(s), stdin);

    int seen[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            seen[c - 'a'] = 1;
        }
    }

    int isPangram = 1;
    for (int i = 0; i < 26; i++) {
        if (seen[i] == 0) {
            isPangram = 0;
            break;
        }
    }

    if (isPangram) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }

    return 0;
}
