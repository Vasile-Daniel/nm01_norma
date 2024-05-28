#include <stdio.h>

/* Function to calculate the absolute value of a float */
float absolute(float x) {
    return (x < 0) ? -x : x;
}

/* Function to calculate the Chebyshev norm (max norm) of a vector */
float chebyshev_norm(int size, float vector[]) {
    float max_value = absolute(vector[0]);  // Initialize max_value with the absolute value of the first element
    for (int i = 1; i < size; i++) {
        float abs_value = absolute(vector[i]);
        if (max_value < abs_value) {
            max_value = abs_value;
        }
    }
    return max_value;
}

int main() {
    float vector_norm;
    int n;
    float array[10];

    // Get the size of the vector from the user
    printf("Enter n (size of the vector, max 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid input! n should be between 1 and 10.\n");
        return 1;
    }

    // Get the vector elements from the user
    for (int j = 0; j < n; j++) {
        printf("a[%d] = ", j);
        scanf("%f", &array[j]);
    }

    // Calculate the Chebyshev norm of the vector
    vector_norm = chebyshev_norm(n, array);

    // Print the result
    printf("Chebyshev Norm = %.2f\n", vector_norm);

    return 0;
}
