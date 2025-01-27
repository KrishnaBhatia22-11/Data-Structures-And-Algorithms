#include <stdio.h>
#define MX 10     // Defining a constant MX

int main() {
    int arr[MX], val, i, occ = 0;    // Declaration of array and variables

    // Loop to read values into the array
    for (i = 0; i < MX; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to be searched: ");
    scanf("%d", &val);       // Reading the value to be searched into val

    // Loop to find the search value
    for (i = 0; i < MX; ++i) {
        if (val == arr[i]) {          // Check whether current element matches the search value
            printf("Found at location number %d\n", i + 1);  // Success message with location
            occ++;                     // Increment occurrence count
        }
    }

    // Check if the value was not found
    if (occ == 0) {
        printf("No such value exists in the array\n");
    } else {
        printf("Number of occurrences = %d\n", occ);
    }

    return 0; // Return statement to indicate successful completion
}
