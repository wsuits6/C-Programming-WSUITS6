#include <stdio.h>

int main() {

    //declaring variables
    char username[] = "admin";

    if (username == "admin"){
        printf("Access Granted");
    } else {
        printf("Access Denied");
    }
    return 0;
}