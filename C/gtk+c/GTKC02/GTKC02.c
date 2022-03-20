#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

int a;

	// Declaración de Objetos Globales
	
GtkWidget *msg;
GtkWidget *Window;

	// Declaraión de Funciones

void hola_mundo(GtkWidget* Button, gpointer data){
	
	
	msg = gtk_message_dialog_new(GTK_WINDOW(Window), GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "HOLA MUNDO");
	
	for (a=0; a < 5; a++){
		
		g_print("\033[1mhola mundo\n");
	
	}
	gtk_widget_show(msg);
	
}

int main(int argc, char **argv){

	system("\033[44m");
	system("\033[33m");
	system("clear");
	
		// Lista de Objetos Privados
	
	GtkWidget *Hbox;
	GtkWidget *Button;
	GtkWidget *Label2;
	GtkWidget *Label;
	GtkWidget *Vbox;
	GtkWidget *Scale;
	
		// Inicio de la Función
		
	gtk_init(&argc, &argv);
		
		// Declaración de Objetos
		
	Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	Vbox = gtk_vbox_new(FALSE, 10);
	Hbox = gtk_hbox_new(FALSE, 10);
	Label = gtk_label_new("My First GTK+ Application 2.0");
	Button = gtk_button_new_with_label("Imprimir");
	Label2 = gtk_label_new("HOLA MUNDO");
	Scale = gtk_hscale_new_with_range(0, 255, 1);
		
		// Declaración de la Ventana principal
		
	gtk_window_set_title(GTK_WINDOW(Window), "Ventana Hola Mundo desde GTk2.0 con C");
	gtk_window_set_default_size(GTK_WINDOW(Window), 340,280);
	
		// Declaración de contenedores
		
	gtk_container_add(GTK_CONTAINER(Window), Vbox);
	gtk_container_set_border_width(GTK_CONTAINER(Window), 5);
	
		// Arreglo de Objetos en cajas
	
	gtk_box_pack_start(GTK_BOX(Vbox), Label, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(Vbox), Scale, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(Vbox), Hbox, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(Hbox), Label2, TRUE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(Hbox), Button, TRUE, TRUE, 0);
	
		// Señales
	
	g_signal_connect(G_OBJECT(Button),"clicked", G_CALLBACK(hola_mundo), NULL);
	
		// Lista de Objetos que se mostraran con la carga de la ventana
		
	gtk_widget_show(Vbox);
	gtk_widget_show(Hbox);
	gtk_widget_show(Label);
	gtk_widget_show(Scale);
	gtk_widget_show(Button);
	gtk_widget_show(Label2);
	gtk_widget_show(Window);
	
		// Fin de la Función Principal
		
	gtk_main();
	
	return 0;
}
