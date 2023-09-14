#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that print a line to the standard error
 *
 * Return(1)
 */
int main(void)
{
    write(2 ,"and that plece of art is useful\" - Dora korper, 2015-10-19\n", 59);
return(1);
}
