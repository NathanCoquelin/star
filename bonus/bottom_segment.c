/*
** EPITECH PROJECT, 2022
** bottom_segment
** File description:
** This will output the bottom of the triangle
*/
#include <stdio.h>

char evaluate_valid_top_segment(int size, int y, int x);
void display_top_segment_line_column(int size, int y);

void display_bottom_segment(int size)
{
    for (int y = size; y >= 1; y--) {
        display_top_segment_line_column(size, y);
        printf("%c", '\n');
    }
}
