/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** reverse
*/

void my_swap_char(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

char *my_revstr(char *str)
{
    char *str_new = str;
    int half;
    int count = 0;

    while (str[count] != '\0')
        count++;
    if (count % 2 != 0) half = count/2 + 1;
    else half = count / 2;

    for (int i = 0; i < half; i++) {
        my_swap_char(&str[i], &str[count - 1]);
        count--;
    }
    return str;
}