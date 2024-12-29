//Print Pascal triangle.
#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces for formatting
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        int num = 1; // Initialize first number in each row as 1
        for (int j = 0; j <= i; j++) {
            printf("%4d", num); // Print the current element
            
            // Update num to the next element in the row
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}