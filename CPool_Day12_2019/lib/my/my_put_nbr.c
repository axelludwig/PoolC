/*
** EPITECH PROJECT, 2019
** Task 07
** File description:
** displays int as string
*/

int get_digit_count(long nb_new);

int get_power(int nb_digit);

int display(long nb_new, int power, int count);

long cast_long(int nb);

int my_put_nbr(int nb)
{
    int count;
    int res = nb;
    int power;
    long nb_new;
    int bool;


    nb_new = cast_long(nb);
    if (nb_new == 0) {
        my_putchar('0');
    }
    else if (nb_new < 0) {
        my_putchar('-');
        if (nb_new < 0) nb_new = -nb_new;
    }
    count = get_digit_count(nb_new);
    power = get_power(count);
    display(nb_new, power, count);
    return 0;
}

int get_digit_count(long nb_new)
{
    int count = 0;
    while (nb_new >= 10) {
        nb_new /= 10;
        count++;
    }
    return count;
}

int get_power(int count)
{
    int power = 1;
    while (count > 0) {
        power *= 10;
        count--;
    }
    return power;
}

int display(long nb_new, int power, int count)
{
    int c = count;
    int res;
    while (nb_new > 0) {
        res = nb_new/power;
        my_putchar(res + '0');
        nb_new %= power;
        if (nb_new == 0) {
            for (int i = 0; i < count; i++) {
                my_putchar('0');
            }
        }
        power /= 10;
        count--;
    }
    return 0;
}

long cast_long(int nb)
{
    long new_nb;

    if (nb == -2147483648) {
        nb++;
        nb = -nb;
        long new_nb = nb + 1;
        return new_nb;
    }
    else {
        new_nb = nb;
        return new_nb;
    }
}