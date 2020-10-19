#include <stdio.h>
#include <limits.h>

int main() {
    printf(" Number of bits in a char object (byte): %d\n", CHAR_BIT);
    printf(" Maximum value for an object of type char: %d\n", CHAR_MAX);
    printf(" Minimum value for an object of type char: %d\n", CHAR_MIN);
    printf(" Maximum value for an object of type int: %d\n", INT_MAX);
    printf(" Minimum value for an object of type int: %d\n", INT_MIN);
    printf(" Maximum value for an object of type long int: %ld\n", (long) LONG_MAX);
    printf(" Minimum value for an object of type long int: %ld\n", (long) LONG_MIN);
    printf(" Maximum value for an object of type signed char: %d\n", SCHAR_MAX);
    printf(" Minimum value for an object of type signed char: %d\n", SCHAR_MIN);
    printf(" Maximum value for an object of type short int: %d\n", SHRT_MAX);
    printf(" Minimum value for an object of type short int: %d\n", SHRT_MIN);
    printf(" Maximum value for an object of type unsigned char: %d\n", UCHAR_MAX);
    printf(" Maximum value for an object of type unsigned int: %u\n", (unsigned int) UINT_MAX);
    printf(" Maximum value for an object of type unsigned long int: %lu\n", (unsigned long) ULONG_MAX);
    printf(" Maximum value for an object of type unsigned short int: %d\n", (unsigned short) USHRT_MAX);
return 0;
}
