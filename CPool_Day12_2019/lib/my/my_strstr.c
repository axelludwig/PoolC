/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** strm p
*/

char *copy_sub_array(char *str, int start, int length);

int get_length(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return count;
}

int is_equal(char *str, char const *to_find, int start)
{
    int count = 0;
    for (int i = start; i < start + get_length(to_find); ++i, ++count) {
        if (str[i] != to_find[count]) return 1;
    }
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    int start = 0;
    int str_length = get_length(str);
    char *res;
    int bool = 0;

    for (int i = 0; i < str_length; i++) {
        if (str[i] == to_find[0]) {
            start = i;
            if (is_equal(str, to_find, start) == 0) {
                bool = 1;
                res = copy_sub_array(str, start, get_length(to_find));
            }
        }
    }
    if (1 == bool) return res;
    else {
        return "";
    }
}

char *copy_sub_array(char *str, int start, int length)
{
    char *res;
    int count = 0;
    for (int i = 0; i < start; i++, ++count) {
        str++;
        res = str;
    }
    return res;
}