#include <ncurses.h>

int main()
{
	initscr();
	raw();
	printw("Window Hello World");
	refresh();
	getch();
	endwin();
	
	return 0;
}

