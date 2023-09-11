#include <stdio.h>

/**
 * main-is the key of any c program
 *return 0; after the end of the program
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %zu byte(s) \n", sizeof(a));
printf("Size of an int: %zu byte(s) \n", sizeof(b));
printf("Size of a long int: %zu byte(s) \n", sizeof(c));
printf("Size of a long long int: %zu byte(s) \n", sizeof(d));
printf("Size of a float: %zu byte(s) \n", sizeof(e));
}
