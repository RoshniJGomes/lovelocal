Hey this is for testing here


code1:Easy
 **Pascal's Triangle Generation:**
   - Dynamically allocates memory for the triangle.
   - Fills triangle values using the sum of two above elements.

 **Memory Management:**
   - Allocates memory for triangle and metadata.
   - Frees allocated memory to prevent leaks.

 **User Interaction and Output:**
   - Takes user input for the number of rows.
   - Generates, prints, and deallocates memory for Pascal's Triangle.


code2: medium
 **Minimum of Three Integers Function:**
   - Defines a function `min` that returns the minimum value among three integers.

 **Maximal Square Comprising 1's:**
   - Allocates memory for a dynamic programming array (`dp`) to track the size of squares made up of consecutive '1's.
   - Iterates through the input matrix, updating `dp` based on the presence of '1's and their neighbors.
   - Finds the maximum side length of the square containing only '1's.

 **User Input and Output:**
   - Takes user input for the dimensions of a matrix and its elements (0 or 1).
   - Calls the `maximalSquare` function, prints the result, and frees allocated memory to avoid leaks.

code3: hard
**Counting Digit 1 Function:**
   - Defines a function `countDigitOne` to count the occurrences of the digit '1' in the range [0, n].
   - Utilizes a loop to iterate through powers of 10 and calculates the count based on the digit's position.
**User Input and Constraints:**
   - Takes user input for the value of 'n'.
   - Checks if the input is within the specified constraints (between 0 and 1000000000). If not, it prints an error message and exits with a code of 1.
**Result Calculation and Display:**
   - Calls the `countDigitOne` function with the user-provided input.
   - Prints the input value and the corresponding count of digit '1' in the range [0, n].
