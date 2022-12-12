#include <stdio.h>

/**
 *main -print the size of various types
 *
 *Description: c program that prints the size of various typeson the computer
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
printf("size of char: %d byte(s)\n", (int) sizeof(char));
printf("size of int: %d byte(s)\n", (int) sizeof(int));
printf("size of long int: %d byte(s)\n", (int) sizeof(long int));
printf("size of long long int: %d byte(s)\n", (int) sizeof(long long int));
printf("size of float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
