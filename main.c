#include <stdio.h>
#include "creationLoi.h"
void createPoisson(int n, int p){

}


void createBinomiale(int n, int p){

}


int main(int argc, char *argv[]){

	if ( argc != 3) { printf(" Usage : %s n p \n", argv[0]); exit(-1); }

	int n = atoi(argv[1]);
	int p = atoi(argv[2]);

	/*if ( p >= 0,1 ) { printf(" Usage : p <= 0,1 \n"); exit(-1);}
	if ( n*p >= 15 ) { printf(" Usage : np <= 15 \n"); exit(-1);}
	if ( n <= 30 ) { printf(" Usage : n >= 30 \n"); exit(-1);}*/

	createBinomiale(n, p);
	createPoisson(n, p);
}