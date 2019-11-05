/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** negative or positive value
*/

#include <unistd.h>

void my_putchar2(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar2('P');
    }
    else {
        my_putchar2('N');
    }
    return (0);
}