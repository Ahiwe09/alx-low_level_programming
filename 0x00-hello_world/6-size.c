#inlude <stdio.h>
/**
 * main - A program that prints the sizes of various data types on the computer
 * return 0
 */
int main(void)
{
	char a;
	int b;
	long int int d;
	long long int d;
	float f;

printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(a));
printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(b));
printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(d));
printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
