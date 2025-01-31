#include <stdio.h>

// Function to calculate and print the transpose of a 3x3 matrix
void transpose(int x[][3])
{
    int y[3][3]; // Array to store the transpose
    int i, j;    // Loop variables

    // Loop to calculate the transpose of matrix x
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            y[i][j] = x[j][i]; // Swap rows and columns for transpose
        }
    }

    // Print the transpose matrix y
    printf("Transpose of the matrix is:\n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%d\t", y[i][j]);
        }
        printf("\n"); // Move to the next row
    }
}

// Main function to run the program
int main()
{
    // 3x3 matrix initialization
    int arr[3][3] = {
        {1, 2, 3},
        {3, 4, 5},
        {5, 6, 7}
    };

    // Call the transpose function and pass the matrix arr
    transpose(arr);

    return 0; // End of the program
}
