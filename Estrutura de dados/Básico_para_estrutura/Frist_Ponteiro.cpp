#include <stdio.h>
#include <stdlib.h>

main (){
	
	int variavel = 250; 
	int *ponteiro;
	int exibir;
	
	
	ponteiro = &variavel; //Passando o edenre�o de mem�ria da variavel pro ponteiro;
	exibir = *ponteiro; //Passando o cont�udo do *ponteiro para a vari�vel exibir;
	
	printf ("\n%d - %p\n",exibir,ponteiro); //%p serve para mostrar o endere�o da memoria :D
	
	
}
