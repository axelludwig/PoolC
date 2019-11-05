/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int is_alpha_num(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (0);
    else if (c >= '0' && c <= '9')
        return (0);
    else
        return (1);
}

int get_array_count(char const *str)
{
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (is_alpha_num(str[i]) == 0 ) {
            i++;
            while (is_alpha_num(str[i]) == 0)
                i++;
            if (is_alpha_num(str[i - 1]) == 0)
                res++;
        } else
            i++;
    }
    return res;
}

char *fill_string(char const *str, char *res, int start, int count)
{
    int indice = 0;
    for (int i = start; i < start + count; i++) {
        res[indice] = str[i];
        indice++;
    }
    res[indice + 1] = '\0';
    return res;
}

char **my_str_to_word_array(char const *str)
{
    int count, length, start = 0;
    int index, res_index = 0;
    char **res;
    res = malloc(sizeof(char *) * (get_array_count(str)));

    length = 0;
    while (str[index] != '\0') {
        ++length;
        index++;
    }
    index = 0;
    while (index <= length) {
        if (index == length) {
            if ((is_alpha_num(str[index - 1]) == 0)) {
                res[res_index] = malloc(sizeof(char) * (count + 1));
                res[res_index] = fill_string(str, res[res_index], start, count);
                res_index++;
            }
            res[res_index] = malloc(sizeof(char) * 1);
            res[res_index] = 0;
            ++index;
        } else if (is_alpha_num(str[index]) == 0) {
            count = 1;
            start = index;
            index++;
            while (is_alpha_num(str[index]) == 0 && index < length) {
                count++;
                index++;
            }
        } else {
            if (count > 0) {
                res[res_index] = malloc(sizeof(char) * (count + 1));
                res[res_index] = fill_string(str, res[res_index], start, count);
                res_index++;
                count = 0;
            }
        index++;
        }
    }

    return res;
}