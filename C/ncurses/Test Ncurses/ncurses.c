#include <ncurses.h>

int main()
{
	initscr();	/*  Iniciar pantalla en modo ncurses  */
	printw("Hola Mundo"); /* Imprimir mensaje de Hola Mundo */
	refresh(); /* Imprime el mensaje en la verdadera pantalla */
	getch(); /* Espera por la entrada del usuario */
	endwin(); /* Sale del modo Ncurses */
	
	return 0;
}

