#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define fnegro	 "\033[30m"
#define frojo	 "\033[31m"
#define fverde 	 "\033[32m"
#define famarillo "\033[33m"
#define fazul	 "\033[34m"
#define ffucsia	 "\033[35m"
#define fcyan	 "\033[36m"
#define fgris	 "\033[37m"

#define bnegro	 "\033[40m"
#define brojo	 "\033[41m"
#define bverde 	 "\033[42m"
#define bmarron "\033[43m"
#define bazul	 "\033[44m"
#define bmagenta "\033[45m"
#define bcyan	 "\033[46m"
#define bblanco	 "\033[47m"


int main(){
	
	char login[20];
	char pass[10];
	
	system(bazul);
	system(famarillo);
	system("clear");
	
	printf("\033[1mLOGIN: ");
	scanf("%s", login);
	system("clear");
	
	printf("PASSWORD: ");
	scanf("%s", pass);
	system("clear");
	
	printf("Bienvenido: %s \n", login);
	
	
	getchar();
	getchar();
	return 0;
}
