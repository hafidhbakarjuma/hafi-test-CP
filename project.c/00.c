#include <stdio.h>

// Function prototypes
void greet(void);
int add(int a, int b);
float multiply(float a, float b);

int main() {
    // Calling functions
    greet();
    
    int sum = add(5, 7);
    printf("Sum: %d\n", sum);
    
    float product = multiply(3.5, 2.0);
    printf("Product: %.2f\n", product);
    
    return 0;
}

// Function definitions

// Function to print a greeting message
void greet(void) {
    printf("Hello, World!\n");
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two floats
float multiply(float a, float b) {
    return a * b;
}
