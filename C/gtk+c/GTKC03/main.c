/*
 * main.c
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


#include <stdio.h>
#include <stdlib.h>
#include "widgets.h"
#include "funtions.h"
#include "events.h"
#include <gtk/gtk.h>


int main(int argc, char **argv){
	
		gtk_init(&argc, &argv);
		
		Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
		
		Vbox = gtk_vbox_new(FALSE, 2);
		Hbox = gtk_hbox_new(FALSE, 2);
		Vbox1 = gtk_vbox_new(TRUE, 0);
		Hbox1 = gtk_hbox_new(TRUE, 0);
		Hbox2 = gtk_hbox_new(TRUE, 0);
		Hbox3 = gtk_hbox_new(TRUE, 0);
		Hbox4 = gtk_hbox_new(TRUE, 0);
		
		Entry = gtk_entry_new();
		EQButton = gtk_button_new_with_label("=");
		Button1 = gtk_button_new_with_label("1");
		Button2 = gtk_button_new_with_label("2");
		Button3 = gtk_button_new_with_label("3");
		Button4 = gtk_button_new_with_label("4");
		Button5 = gtk_button_new_with_label("5");
		Button6 = gtk_button_new_with_label("6");
		Button7 = gtk_button_new_with_label("7");
		Button8 = gtk_button_new_with_label("8");
		Button9 = gtk_button_new_with_label("9");
		Button10 = gtk_button_new_with_label(",");
		Button11 = gtk_button_new_with_label("0");
		Button12 = gtk_button_new_with_label("Crl");
		SButton = gtk_button_new_with_label("+");
		RButton = gtk_button_new_with_label("-");
		MButton = gtk_button_new_with_label("x");
		DButton = gtk_button_new_with_label("/");
		
		gtk_window_set_default_size(GTK_WINDOW(Window), 220, 250);
		//gtk_window_set_resizable(GTK_WINDOW(Window), FALSE);
		gtk_container_add(GTK_CONTAINER(Window), Vbox);
		gtk_container_set_border_width(GTK_CONTAINER(Window), 2);
		gtk_entry_set_alignment(GTK_ENTRY(Entry), 1);
		
		gtk_box_pack_start(GTK_BOX(Vbox), Entry, FALSE, FALSE, 10);
		gtk_box_pack_start(GTK_BOX(Vbox), Hbox, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox), Vbox1, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Vbox1), Hbox1, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Vbox1), Hbox2, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Vbox1), Hbox3, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Vbox1), Hbox4, TRUE, TRUE, 0);
		
		gtk_box_pack_start(GTK_BOX(Hbox), EQButton, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox1), SButton, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox1), Button1, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox1), Button2, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox1), Button3, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox2), RButton, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox2), Button4, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox2), Button5, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox2), Button6, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox3), MButton, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox3), Button7, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox3), Button8, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox3), Button9, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox4), DButton, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox4), Button10, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox4), Button11, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(Hbox4), Button12, TRUE, TRUE, 0);	
		
				
		g_signal_connect(G_OBJECT(Window), "delete_event", G_CALLBACK(salir),NULL);
		g_signal_connect(G_OBJECT(Button1), "clicked", G_CALLBACK(one), NULL);
		g_signal_connect(G_OBJECT(Button2), "clicked", G_CALLBACK(two), NULL);
		g_signal_connect(G_OBJECT(Button3), "clicked", G_CALLBACK(three), NULL);
		g_signal_connect(G_OBJECT(Button4), "clicked", G_CALLBACK(four), NULL);
		g_signal_connect(G_OBJECT(Button5), "clicked", G_CALLBACK(five), NULL);
		g_signal_connect(G_OBJECT(Button6), "clicked", G_CALLBACK(six), NULL);
		g_signal_connect(G_OBJECT(Button7), "clicked", G_CALLBACK(seven), NULL);
		g_signal_connect(G_OBJECT(Button8), "clicked", G_CALLBACK(eight), NULL);
		g_signal_connect(G_OBJECT(Button9), "clicked", G_CALLBACK(nine), NULL);
		g_signal_connect(G_OBJECT(Button10), "clicked", G_CALLBACK(point), NULL);
		g_signal_connect(G_OBJECT(Button11), "clicked", G_CALLBACK(zero), NULL);
		g_signal_connect(G_OBJECT(Button12), "clicked", G_CALLBACK(Clr), NULL);
		
		g_signal_connect(G_OBJECT(SButton), "clicked", G_CALLBACK(SUMA), NULL);
		g_signal_connect(G_OBJECT(RButton), "clicked", G_CALLBACK(RESTA), NULL);
		g_signal_connect(G_OBJECT(MButton), "clicked", G_CALLBACK(MULTIPLICACION), NULL);
		g_signal_connect(G_OBJECT(DButton), "clicked", G_CALLBACK(DIVICION), NULL);
		g_signal_connect(G_OBJECT(EQButton), "clicked", G_CALLBACK(RESULTADO), NULL);	
		
		gtk_widget_show(Vbox);
		gtk_widget_show(Entry);
		gtk_widget_show(Hbox);
		gtk_widget_show(Vbox1);
		gtk_widget_show(Hbox1);
		gtk_widget_show(Hbox2);
		gtk_widget_show(Hbox3);
		gtk_widget_show(Hbox4);	
		gtk_widget_show(EQButton);
		gtk_widget_show(SButton);
		gtk_widget_show(RButton);
		gtk_widget_show(MButton);
		gtk_widget_show(DButton);
		gtk_widget_show(Button1);
		gtk_widget_show(Button2);
		gtk_widget_show(Button3);
		gtk_widget_show(Button4);
		gtk_widget_show(Button5);
		gtk_widget_show(Button6);
		gtk_widget_show(Button7);
		gtk_widget_show(Button8);
		gtk_widget_show(Button9);
		gtk_widget_show(Button10);
		gtk_widget_show(Button11);
		gtk_widget_show(Button12);
		gtk_widget_show(Window);
		
		gtk_main();
	
	return 0;
}

