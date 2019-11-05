/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** strncm p
*/

int get_length_my_strncmp(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return count;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count_s1 = 0;
    int count_s2 = 0;

    int i = 0;
    while (i < get_length_my_strncmp(s1) && i < n) {
        count_s1 += s1[i];
        i++;
    }
    i = 0;
    while (i < get_length_my_strncmp(s2) && i < n) {
        count_s2 += s2[i];
        i++;
    }
    return count_s1 - count_s2;
}