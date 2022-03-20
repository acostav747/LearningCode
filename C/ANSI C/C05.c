#include "stdio.h"
#include "unistd.h"

FILE *archivo;
char datos;

int main(){
 
 	archivo = fopen("./ftest", "r");
 	datos = fgetc(archivo);
 	while(feof(archivo) == 0){
				
		printf("%c", datos);
		datos = fgetc(archivo);
		
	}
 	fflush(stdin);
 	getchar();
 	return 0;
 }
