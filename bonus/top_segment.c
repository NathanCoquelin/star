/*
** EPITECH PROJECT, 2022
** top_segment
** File description:
** This will output the top segemnt of the triangle
*/

#include <stdio.h>

char evaluate_valid_top_segment(int size, int y, int x)
{
    unsigned int left_offset = ( size * 2 ) + ( size - 1 - y  ) + 2;
    unsigned int top_segment_width = y * 2 - 1;

    if (size == 1) {
        left_offset = 4;
    }
    if (x == left_offset || ( x == left_offset + top_segment_width - 1) ) {
        return '*';
    }
    return ' ';
}

void display_top_segment_line_column(int size, int y)
{
    unsigned int left_offset = size + y;
    unsigned int top_segment_width = size * 2 - 1;
    unsigned int is_size_one = 0;

    if (size == 1)
        is_size_one = 1;
    for (int x = 1; x <= left_offset + top_segment_width + is_size_one; x++) {
        printf("%c", evaluate_valid_top_segment(size, y, x));
    }
}

void display_top_segment(int size)
{
    for (int y = 1; y <= size; y++) {
        display_top_segment_line_column(size, y);
        printf("%c", '\n');
    }
}
