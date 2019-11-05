/*
** EPITECH PROJECT, 2019
** Task 01
** File description:
** swap values
*/

void my_swap(int *a, int *b);

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
