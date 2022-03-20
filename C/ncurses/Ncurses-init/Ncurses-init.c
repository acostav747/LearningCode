#include <ncurses.h>
int key;

int main()
{
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	
	printw("Por favor escribe \n");
	key = getch();
	
	if (key == KEY_F(1)){
		printw("Your press F1 Key");		
		}else{
			printw("la tecla precionada es ");
			printw("%c", key);			
			}
	refresh();
	getch();
	endwin();
	
	
	return 0;
}

