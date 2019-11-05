/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** upper case
*/

int get_length_upper(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return count;
}

char *my_strupcase(char *str)
{
    for (int i = 0; i < get_length_upper(str); ++i)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    return str;
}