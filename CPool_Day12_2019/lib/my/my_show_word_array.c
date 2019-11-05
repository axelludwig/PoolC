/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_show_word_array
*/

int my_putstr_show(char const *str)
{
    int i = 0;
    char c;

    while (str[i] != '\0') {
        c = str[i];
        write(1, &c, 1);
        i++;
    }
}

int my_show_word_array(char *const *tab)
{
    int index = 0;
    while (tab[index] != 0) {
        my_putstr_show(tab[index]);
        write(1, "\n", 1);
        ++index;
    }
}