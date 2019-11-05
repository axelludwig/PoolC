/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** sqrt it
*/

int my_compute_square_root(int nb)
{
    if (1 == nb) return 1;
    else if (0 >= nb) return 0;
    for (long i = 0; (nb/2 + 1) > i; ++i) {
        if (46340 <= i) return 0;
        else if (nb == i*i) return i;
    }
    return 0;
}