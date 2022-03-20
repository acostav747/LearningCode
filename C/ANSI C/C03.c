#include <stdio.h>
#include <stdlib.h>

int main(){

    Menu();
    return 0;
}

void Menu (){
    int op=0;
    system("clear");
    printf("\t1.-START\n");
    printf("\t2.-SELECT\n");
    printf("\t3.-OPTION\n");
    printf("\t4.-EXIT\n");
    scanf("%d", &op);

    switch(op){
	
	case 1:
	    
	    system("clear");
	    printf("You selected the first OPTION\a\n");
	    getchar();
	    getchar();
	    break;

	case 2:
	    
	    system("clear");
	    printf("You selected the seconnd OPTION\a\n");    
	    getchar();
	    getchar();
	    
	    break;

	case 3:

	    system("clear");
	    printf("You seleted the three OPTION\a\n");
	    getchar();
	    getchar();
	    break;
	    
	case 4:
	    
	    system("clear");
	    printf("see you later\n");
	    return 0;
	
	default:
	    
	    system("clear");
	    printf("Select one OPTION please\n");
	    getchar();
	    getchar();
	    break;
	
	}
    main();

}
