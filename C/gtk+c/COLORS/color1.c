#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

static void on_destroy(GtkWidget* widget, gpointer data)
{
        gtk_main_quit ();
}

int main (int argc, char* argv[])
{
        GtkWidget* window;
        GtkWidget* button;
		GdkColor color;
        gtk_init(&argc, &argv);
        window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        g_signal_connect(G_OBJECT (window), "destroy",
                G_CALLBACK (on_destroy), NULL);
        button = gtk_button_new_with_label("Hello world!");
       
		gdk_color_parse("red", &color); 
		
		gtk_widget_modify_bg(window, GTK_STATE_NORMAL, &color);
        gtk_container_add(GTK_CONTAINER(window), button);
        gtk_widget_show_all(window);
        gtk_main();
        return 0;
}

