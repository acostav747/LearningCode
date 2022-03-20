#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

const gchar *user;
const gchar *pass;
GtkWidget *Entry1;
GtkWidget *Entry2;
GdkColor MyColor;



void salir(GtkWidget *Obj, gpointer data){
	
	g_print("Window closed\n");
	gtk_main_quit();
	
	}
void guardar(GtkWidget *Obj, gpointer data){
	
	gtk_widget_modify_bg(GTK_WIDGET(Entry1), GTK_STATE_NORMAL, &MyColor);
	user = gtk_entry_get_text(GTK_ENTRY(Entry1));
	pass = gtk_entry_get_text(GTK_ENTRY(Entry2));
	printf("%s\n", user);
	printf("%s\n", pass);
	
	}

int main(int argc, char **argv){

int i;

	for(i = 0;i<12;i++){
		
		printf ("* ");
		
		}
		printf ("*\n");
	for(i = 0;i<2;i++){
		
		printf ("* \t\t\t*\n");
		
		}
		
		printf ("* \tGTK+ en C\t*\n");
		
	for(i = 0;i<2;i++){
		
		printf ("* \t\t\t*\n");
		
		}
		
	for(i = 0;i<12;i++){
		
		printf ("* ");
		
		}
		printf ("*\n");




	gtk_init(&argc, &argv);
		
		GtkWidget *Window;
		GtkWidget *VBox1;
		GtkWidget *HBox1;
		GtkWidget *Label1;
		GtkWidget *Label2;
		GtkWidget *Button1;
		GtkWidget *Button2;
		
		
		
		Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
		Entry1 = gtk_entry_new();
		Entry2 = gtk_entry_new();
		Label1 = gtk_label_new("Usuario");
		Label2 = gtk_label_new("Contraseña");
		Button1 = gtk_button_new_with_label("Entrar");
		Button2 = gtk_button_new_with_label("Cancelar");
		VBox1 = gtk_vbox_new(FALSE, 2);	
		HBox1 = gtk_hbox_new(TRUE, 2);
		
		gdk_color_parse("#FF00FF", &MyColor);
		
		//gtk_window_set_default_size(GTK_WINDOW(Window), 260, 200);
		gtk_window_set_position(GTK_WINDOW(Window), GTK_WIN_POS_CENTER);
		
		gtk_container_add(GTK_CONTAINER(Window), VBox1);
		gtk_container_set_border_width(GTK_CONTAINER(Window), 30);
		gtk_entry_set_alignment(GTK_ENTRY(Entry1), 0.5);
		gtk_entry_set_alignment(GTK_ENTRY(Entry2), 0.5);
		gtk_entry_set_visibility(GTK_ENTRY(Entry2), FALSE);
		gtk_entry_set_max_length(GTK_ENTRY(Entry1), 20);
		gtk_entry_set_max_length(GTK_ENTRY(Entry2), 10);
		
		gtk_box_pack_start(GTK_BOX(VBox1), Label1, FALSE, FALSE, 0);
		gtk_box_pack_start(GTK_BOX(VBox1), Entry1, FALSE, FALSE, 5);
		gtk_box_pack_start(GTK_BOX(VBox1), Label2, FALSE, FALSE, 0);
		gtk_box_pack_start(GTK_BOX(VBox1), Entry2, FALSE, FALSE, 5);
		gtk_box_pack_start(GTK_BOX(VBox1), HBox1, FALSE, TRUE, 10);
		gtk_box_pack_start(GTK_BOX(HBox1), Button2, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(HBox1), Button1, TRUE, TRUE, 0);
		
		g_signal_connect(G_OBJECT(Window), "delete_event", G_CALLBACK(salir), NULL);
		g_signal_connect(G_OBJECT(Button1), "clicked", G_CALLBACK(guardar), NULL);
		g_signal_connect(G_OBJECT(Button2), "clicked", G_CALLBACK(salir), NULL);
		g_signal_connect(G_OBJECT(Entry2), "activate", G_CALLBACK(guardar), NULL);
		
		
		gtk_widget_show_all(Window);
		
	
	gtk_main();

	return 0;
}
