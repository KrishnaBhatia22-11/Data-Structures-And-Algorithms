// Binary search when array is in descending order
#include <stdio.h>
#include <conio.h>

int main() {
    int a[10], lft = 0, rt = 9, md, val, i;
    
    // Input elements into the array
    printf("Enter 10 elements in descending order:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the value to search: ");
    scanf("%d", &val);
    
    // Perform binary search
    while (lft <= rt) {
        md = (lft + rt) / 2;  // Calculate the middle index

        if (val > a[md]) {
            rt = md - 1; // Search in the left half
        } else if (val < a[md]) {
            lft = md + 1; // Search in the right half
        } else {
            printf("Found at location number = %d\n", md + 1);
            break; // Element found, exit loop
        }
    } // End of loop

    if (lft > rt) {
        printf("No such element exists in the array\n");
    }

    getch();
    return 0;
}
