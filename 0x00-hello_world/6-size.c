#include<stdio.h>
/**
* main - Prints the size of various typesa based on
* the computer it is compiled and run on..
* Return :Always 0.
* */
int main (void)
{
print("size of a char: %zu byte(s)\n", sizeof(char));

print("size of a int: %zu byte(s)\n", sizeof(int));
print("size of a long int: %zu byte(s)\n", sizeof(long int));
print("size of a long long int: %zu byte(s)\n", sizeof(long long int));
print("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
