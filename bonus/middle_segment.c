/*
** EPITECH PROJECT, 2022
** middle_segment
** File description:
** This will display middle segment of the star
*/

#include <stdio.h>

void my_putchar(char c);

void display_first_and_last_line(int size)
{
    unsigned int line_width = size * 2 + 1;
    unsigned int top_segment_width = size * 2 - 2;
    unsigned int is_size_one = 0;

    if ( size == 1) {
        top_segment_width = 1;
        is_size_one = 1;
    }
    for (unsigned int i = 1; i < line_width * 2 +
    top_segment_width + is_size_one; i++) {
        if ( i <= line_width || i >= line_width +
        top_segment_width + is_size_one) {
            printf("%c", '*');
        } else {
            printf("%c", ' ');
        }
    }
    printf("%c", '\n');
}

char evaluate_valid_middle_top_segment(unsigned int size,
unsigned int y, unsigned int x)
{
    unsigned int left_offset = y + 1;
    unsigned int right_offset = 6 * size - 1 - y;

    if (size == 1) {
        right_offset += 2;
    }
    if (x == left_offset || x == right_offset) {
        return '*';
    }
    return ' ';
}

void display_middle_section_line(unsigned int size, unsigned int y)
{
    unsigned int left_offset = y;
    unsigned int middle_spacing = y - size * 2;
    unsigned int is_size_one = 0;

    if (size == 1) {
        is_size_one = 2;
    }
    for (unsigned int x = 1; x <= 6 * size - 1 + is_size_one - y; x++) {
        printf("%c", evaluate_valid_middle_top_segment(size, y, x));
    }
}

void display_middle_middle_section(unsigned int size)
{
    for (unsigned int y = 1; y <= size; y++ ) {
        display_middle_section_line(size, y);
        printf("%c", '\n');
    }
    if (size != 1) {
        for (unsigned int y = size - 1; y >= 1; y--) {
            display_middle_section_line(size, y);
            printf("%c", '\n');
        }
    }
}

void display_middle_segment(int size)
{
    display_first_and_last_line(size);
    display_middle_middle_section(size);
    display_first_and_last_line(size);
}
