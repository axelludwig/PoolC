/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** lower
*/

int get_length_lower(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return count;
}

char *my_strlowcase(char *str)
{
    for (int i = 0; i < get_length_lower(str); ++i)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return str;
}