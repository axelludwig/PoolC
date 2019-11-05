/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** je sais pas
*/

int my_is_prime2(int nb)
{
    if (1 >= nb) return 0;
    for (int i = 2; (nb/2) >= i; ++i) {
        if (0 == nb%i) return 0;
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    while (!my_is_prime2(nb)) nb++;
    return nb;
}