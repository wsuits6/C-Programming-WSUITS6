#include <stdio.h>
#include <string.h>  // Needed for strcmp

int main() {
    // declaring variables
    char username[] = "admin";

    if (strcmp(username, "admin") == 0) {  // Compare string contents
        printf("Access Granted");
    } else {
        printf("Access Denied");
    }

    return 0;
}
