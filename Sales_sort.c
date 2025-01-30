#include <stdio.h>
#define MX 10     // Defining a constant MX for array size

int main() {
    int sales[MX], i, j, temp;  // Declaration of array and other variables

    // Reading values into the array
    printf("Enter %d sales values:\n", MX);
    for (i = 0; i < MX; ++i) {
        printf("sales[%d] = ", i);
        scanf("%d", &sales[i]);
    }

    // Selection Sort for sorting in descending order
    for (i = 0; i < MX - 1; ++i) {  // Outer loop for passes
        for (j = i + 1; j < MX; ++j) {  // Inner loop for comparisons
            if (sales[i] < sales[j]) {  // Swap if the current element is smaller than the next
                temp = sales[i];         // Swap elements
                sales[i] = sales[j];
                sales[j] = temp;
            }
        }
    }

    // Printing the sorted (descending) array
    printf("\nSorted sales in descending order:\n");
    for (i = 0; i < MX; ++i) {
        printf("sales[%d] = %d\n", i, sales[i]);
    }

    return 0;
}
