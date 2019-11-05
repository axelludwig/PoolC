/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** copies n first char of a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int count = 0;

    if (0 >= n) return dest;
    while (src[count] != '\0')
        count++;
    for (int i = 0; i < count; i++) {
        if (i == n)
            dest[i] = '\0';
        else
            dest[i] = src[i];
    }
    dest[count] = '\0';
    return dest;
}