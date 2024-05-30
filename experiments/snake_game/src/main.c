/*
 * Author: C. Maxwell Reilly
 * First Draft: May 27, 2024
 *
 * Snake game in C with ncurses
 */

#include <stdio.h>
#include <ncurses.h>

int
main(void)
{
    initscr();
    printw("Hello world!");
    refresh();
    getch();
    endwin();
    return 0;
}
