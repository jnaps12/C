#include <stdio.h>
#include <stdlib.h>
/*� uma fun��o que chama ela mesma, esse programa resolve um fatorial...*/
main (){
	
	int fatorial (int x);
	int numero, resultado;
	
	printf ("Digite um n�mero inteiro: ");
	scanf ("%d",&numero);
	
	resultado = fatorial(numero);
	
	printf ("\nResultado da fatorial: %d",resultado);
}

int fatorial(int x){
	int resultado;
	
	if (x == 0){
		resultado = 1;
	} else {
		resultado = x * fatorial (x - 1);
	}
	
	return resultado;
	
}

