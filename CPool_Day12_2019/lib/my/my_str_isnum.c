/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** is num
*/

int my_str_isnum(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    if (count == 0)
        return 0;
    for (int i = 0; i < count; i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}