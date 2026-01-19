#include <stdio.h>

//function declaration
int add(int a, int b);


//main function
int main() {
    int a = 16;
    int b = -8;

    int result = add(a, b);
    printf("Result: %d\n", result);

    return 0;
}


// function definition
int add(int a, int b) {
    return a + b;
}