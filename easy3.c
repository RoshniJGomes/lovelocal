#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    if (numRows <= 0) {
        *returnSize = 0;
        return NULL;
    }

    // Allocate memory for the result
    int** result = (int*)malloc(numRows * sizeof(int));
    returnColumnSizes = (int)malloc(numRows * sizeof(int));
    *returnSize = numRows;

    for (int i = 0; i < numRows; i++) {
        result[i] = (int*)malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        // First and last element in each row is 1
        result[i][0] = 1;
        result[i][i] = 1;

        // Fill the rest of the elements in the row
        for (int j = 1; j < i; j++) {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }

    return result;
}

int main() {
    // Get input from the user
    int numRows;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    // Generate Pascal's triangle and print the result
    int returnSize;
    int* returnColumnSizes;

    int** result = generate(numRows, &returnSize, &returnColumnSizes);

    printf("[\n");
    for (int i = 0; i < returnSize; i++) {
        printf("  [");
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d", result[i][j]);
            if (j < returnColumnSizes[i] - 1) {
                printf(",");
            }
        }
        printf("]");
        if (i < returnSize - 1) {
            printf(",");
        }
        printf("\n");
    }
    printf("]\n");

    // Free the allocated memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);

    return 0;
}