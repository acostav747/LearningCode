#include <stdio.h>
#include <gtk/gtk.h>

GtkWidget *ventana;
GtkWidget *boton;

void hola(GtkWidget *obj, gpointer data){
	
	g_print("HOLA MUNDO\n");

	}

gint delete_event(GtkWidget *obj, GdkEvent *evento, gpointer data){
		
		g_print("ha ocurriedo un evento de cierre\n");
		return TRUE;
	}
	
void destroy( GtkWidget *obj, gpointer data ){
	
	gtk_main_quit ();

}

int main(int argc, char **argv)
{
		
	gtk_init(&argc, &argv);
	
	boton = gtk_button_new_with_label("HOLA MUNDO");
	ventana = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	
	g_signal_connect(G_OBJECT(ventana), "delete_event", G_CALLBACK(delete_event), NULL);
	g_signal_connect(G_OBJECT(ventana), "destroy", G_CALLBACK(destroy), NULL);
	g_signal_connect(G_OBJECT(boton), "clicked", G_CALLBACK(hola), NULL);
	g_signal_connect_swapped(G_OBJECT(boton), "clicked", G_CALLBACK(gtk_widget_destroy), G_OBJECT(ventana));
	
	gtk_container_set_border_width(GTK_CONTAINER(ventana),1);
	gtk_container_add(GTK_CONTAINER(ventana), boton);
	
	gtk_widget_show(boton);
	gtk_widget_show(ventana);

	gtk_main();
	return 0;
}

	
