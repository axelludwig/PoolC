/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** power recursif
*/

int my_compute_power_rec(int nb, int p)
{
    int res = 1;

    if (0 == p) return 1;
    else if (0 > p) return 0;
    res = nb * my_compute_power_rec(nb, --p);
    return res;
}