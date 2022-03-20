#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x;
double y;
int z;
double value;

int main(void){

	x = 190.8/86;
	printf("valor de x=%f\n",x);
	//redondeo al valor mas proximo de x hacia arriba
	printf("redondeo %f\n",ceil(x));
	
	//valor absoluto de x
	printf("valor absoluto %f\n",fabs(x));
	
	//redondeo por defecto a al valor mas proximo dependiendo del decimal
	printf("redondeo por defecto %f\n",floor(x));
	
	//Calculo del resto de una divicion
	value = fmod(190.8,86);
	printf("resto de una divicion %f\n",value);
	
	//retorna la mantisa
	value = frexp(x,&z);
	printf("mantisa %f : %d\n", value, z);
	
	//Retorna numero real descompuesto de decimal y entero
	value = modf(x,&y);
	printf("Retorno de numero real descompuesto %f : %f\n", value, y);
	
	//potencia
	value = pow(x,6);
	printf("X a poncia 6 = %f\n", value);
	
	//Raiz
	printf("Raiz cuadrada de x = %f\n",sqrt(x));
	
	// my expretion
	value = sqrt(x*pow(10,-6));
	printf("Mi exprecion: z = raiz(x*10^-6) == z = %f", value);
	getchar();
	return 0;
}

