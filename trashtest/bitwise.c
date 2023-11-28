#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    
    if (b == NULL) {
        return 0; // Return 0 if the input string is NULL
    }
    
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] != '0' && b[i] != '1') {
            return 0; // Return 0 if there is a non-binary character in the string
        }
        
        result = result * 2 + (b[i] - '0'); // Convert binary digit to decimal
    }
    
    return result;
}