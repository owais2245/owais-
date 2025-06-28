#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Value of a, b: ");
    scanf("%d %d", &a, &b); // Note: The image shows &a, &b, and then a third variable c is declared but not read from input.
                            // The image also shows 'c = 9;' later, implying it's not meant for the average of 2 numbers.
                            // The image's code seems to be for swapping values, not calculating an average.

    // The following lines in the image appear to be for swapping values, not calculating an average.
    a = b;
    b = c;
    c = a; // Note: This line in the image is 'c = 9;', which is a direct assignment, not a swap.
           // Assuming the intent was a swap, it should be 'c = original_a_value;' or similar.

    printf("Swapped value of a, b and c is:"); // This line in the image is "Swaped value of a, b and c is."

    return 0;
}