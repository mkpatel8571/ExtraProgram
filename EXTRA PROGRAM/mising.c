//Find missing numbers of sequence using array.(in a sequence 1,2,4,5,7,8,10,  Missing 
//numbers are 3,6,9)

#include <stdio.h>

int main() {
    int n, max;

    // Read the number of elements
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements into the array
    printf("Enter the sequence: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Determine the maximum value in the sequence
    max = arr[n - 1];

    // Find and print missing numbers
    printf("Missing numbers: ");
    int k = 0;
    for (int i = 1; i <= max; i++) {
        if (i != arr[k]) {
            printf("%d ", i);
        } else {
            k++;
        }
    }
    printf("\n");
    return 0;
}

