/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** is upper
*/

int my_str_isupper(char const *str)
{
    int count = 0;
    int val = 0;
    char c;

    while (str[count] != '\0')
        count++;
    if (count == 0)
        return 0;
    for (int i = 0; i < count; i++) {
        c = str[i];
        if (c >= 'A' && c <= 'Z')
            val++;
    }
    if (val == count)
        return 1;
    return 0;
}