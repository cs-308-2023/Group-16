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

// Recursive function to return gcd of a and b
int gcdRec(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    // Base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcdRec(a - b, b);
    return gcdRec(a, b - a);
}