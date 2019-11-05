/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** Comme Ca
*/

int get_length_capitalize(char *str)
{
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

int test_char(char *str, int pos)
{
    if (str[pos - 1] >= 32 && str[pos - 1] <= 47)
        return (1);
    return (0);
}

// else if (i > 0 && test_last_char(str, i) == 1)

char *my_strcapitalize(char *str)
{
    for (int i = 0; i < get_length_capitalize(str); i++) {
        if (0 == i) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        else {
            if (str[i] >= 'a' && str[i] <= 'z' && test_char(str, i) == 1) {
                str[i] = str[i] - 32;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }
    str[get_length_capitalize(str)] = '.';
    return str;
}