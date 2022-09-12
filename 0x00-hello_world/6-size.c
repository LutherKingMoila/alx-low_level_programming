#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of an long int: %lu.\n", (unsigned long)sizeof(lli));
printf("Size of an float: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
