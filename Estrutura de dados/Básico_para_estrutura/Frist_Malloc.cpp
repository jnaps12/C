#include <stdio.h>
#include <stdlib.h>

main(){
	
	int *p = (int *) malloc(sizeof(int)); //Malloc == Memory Allocation.
	/*(int *) � um casting, ele for�a a mudar a mem�ria de void para int... */
	// pois quando vc resorvou mem�ria com o malloc ela era uam memoria vazia.
	//e seu ponteiro � um int...
	
	*p = 1000;
	
	//free(p);
	
	printf ("\n%d\n",*p);
	
	free (p); /*Vai devolver a mem�ria alocada para o S.O.*/ 
	/*Mas os valores colocados continuam...(No exemplo acimao 1000 continua l�...)*/
	
	int *m = (int *) malloc(sizeof(int)); //o *M pode receber o valor 1000 l� de cima...
	// mas n�o � 100% certeza, j� que vc n�o indicou nenhum endere�o, apenas alocou mem�ria.
	
}
