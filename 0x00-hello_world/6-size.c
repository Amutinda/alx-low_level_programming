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
long long int lli;
float  f;
printf("Size of a char: %c bytes(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(li));
printf("Size of long long int: %lld byte(s)\n", sizeof(lli));
printf("Size of a float: %f byte(s)\n", sizeof(f));
return (0);
}
