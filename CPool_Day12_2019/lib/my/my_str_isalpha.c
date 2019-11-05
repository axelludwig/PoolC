/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** is alpha
*/

int is_upper_letter(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (0);
    return (1);
}

int is_lower_letter(char c)
{
    if (c >= 'a' && c <= 'z')
        return (0);
    return (1);
}

int my_str_isalpha(char const *str)
{
    int count = 0;
    int val;

    while (str[count] != '\0')
        count++;
    if (count == 0)
        return 0;
    for (int i = 0; i < count; i++) {
        val = 0;
        val += is_upper_letter(str[i]);
        val += is_lower_letter(str[i]);
        if (val == 2)
            return 0;
    }
    return 1;
}