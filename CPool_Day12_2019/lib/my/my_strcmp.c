/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** strcm p
*/

int get_length_strcmp(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return count;
}

int my_strcmp(char const *s1, char const *s2)
{
    int count_s1 = 0;
    int count_s2 = 0;

    for (int i = 0; i < get_length_strcmp(s1); ++i)
        count_s1 += s1[i];
    for (int i = 0; i < get_length_strcmp(s2); ++i)
        count_s2 += s2[i];
    return count_s1 - count_s2;
}