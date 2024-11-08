/*
** EPITECH PROJECT, 2022
** star
** File description:
** This will display a david's star
*/

#include <stdio.h>

void my_putchar(char c);
char evaluate_valid_top_segment(int size, int y, int x);
void display_top_segment_line_column(int size, int y);
void display_top_segment(int size);
void display_middle_segment(int size);
void display_bottom_segment(int size);

void star(unsigned int size)
{
    if (size <= 0 ) {
        write(2, "Invalid size\n", 13);
        return;
    }
    printf("\033[1;33m");
    display_top_segment(size);
    display_middle_segment(size);
    display_bottom_segment(size);
    printf("\033[0m");
}
