#include <stdio.h>
#include <string.h>

int main() {
    int score = 0;
    char status[20];  // enough space for all status strings

    if (score <= 45) {
        strcpy(status, "failed");
    } else if (score <= 60) {
        strcpy(status, "pass");
    } else if (score <= 80) {
        strcpy(status, "exceled");
    } else if (score <= 100) {
        strcpy(status, "distinction");
    } else {
        strcpy(status, "invalid");
    }

    printf("SCORE: %d\nSTATUS: %s\n", score, status);

    return 0;
}
