
#include <stdio.h>
/**
*main-prints the output of the printf function
*Description: using the main functioon
*This program prints the sizes of the varios types on the computer
*Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long int lld;
float  f;
printf("Size of a char: %zu bytes(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("Size of a long int: %zu byte(s)\n", sizeof(li));
printf("Size of long long int: %zu byte(s)\n", sizeof(lld));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
