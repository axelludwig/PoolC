/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** copies a string
*/

char *my_strcpy(char *dest, char const *src)
{
    int count = 0;

    while (src[count] != '\0')
        count++;
    for (int i = 0; i < count; i++)
        dest[i] = src[i];
    dest[count] = '\0';
    return dest;
}