/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** print P if POSITIV N negate or null
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
}
