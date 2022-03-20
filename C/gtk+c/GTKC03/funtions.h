/*
 * funtions.h
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <gtk/gtk.h>
#include "widgets.h"

void salir(GtkWidget *Obj, gpointer data){
	
	gtk_main_quit();

}

void RESULTADO(GtkWidget *Obj, gpointer data){
	
		b = atof(gtk_entry_get_text(GTK_ENTRY(Entry)));

		switch (op) {
		
			case 'S':
			
				x = a+b;
		
				break;
		
			case 'R':
			
				x = a-b;
			
				break;
		
			case 'M':
		
				x = a*b;
			
				break;
		
			case 'D':
		
				x = a/b;
		
				break;
		
			default :
		
				Message = gtk_message_dialog_new(GTK_WINDOW(Window), GTK_DIALOG_MODAL, GTK_MESSAGE_ERROR, GTK_BUTTONS_CLOSE, "ERROR!!! debe seleccionar una operacion aritmetica primero");
				gtk_widget_show(Message);
			
				break;
		}
		
		c = g_strdup_printf("%f", x);
		gtk_entry_set_text(GTK_ENTRY(Entry), c);

}

void SUMA(GtkWidget *Obj, gpointer data){
	
	a = atof(gtk_entry_get_text(GTK_ENTRY(Entry)));
	gtk_entry_set_text(GTK_ENTRY(Entry), "");
	 op = 'S';

}

void RESTA(GtkWidget *Obj, gpointer data){
	
	a = atof(gtk_entry_get_text(GTK_ENTRY(Entry)));
	gtk_entry_set_text(GTK_ENTRY(Entry), "");
	op = 'R';
}

void MULTIPLICACION(GtkWidget *Obj, gpointer data){
	
	a = atof(gtk_entry_get_text(GTK_ENTRY(Entry)));
	gtk_entry_set_text(GTK_ENTRY(Entry), "");
	op = 'M';
}

void DIVICION(GtkWidget *Obj, gpointer data){
	
	a = atof(gtk_entry_get_text(GTK_ENTRY(Entry)));
	gtk_entry_set_text(GTK_ENTRY(Entry), "");
	op = 'D';
}


void one(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "1");
	
}

void two(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "2");
	
}

void three(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "3");
	
}

void four(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "4");
	
}

void five(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "5");
	
}

void six(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "6");
	
}

void seven(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "7");
	
}

void eight(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "8");
	
}

void nine(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "9");
	
}

void zero(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), "0");
	
}

void point(GtkWidget *Obj, gchar data){
	
	gtk_entry_append_text(GTK_ENTRY(Entry), ",");
	
}

void Clr(GtkWidget *Obj, gchar data){
	
	gtk_entry_set_text(GTK_ENTRY(Entry), "");
	
}
