#include "functions.h"

int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = (a < b)? a:b;
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
 
    // Return gcd of a and b
    return result;
}