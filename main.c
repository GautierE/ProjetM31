#include <stdio.h>
#include <stdlib.h>
#include "main.h"

double factorielle(double n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorielle(n-1));
}

double puissance(double p, double k)
{
	double result = 1;

	for(int i = 0; i < k; i++)
	{
		result *= p;
	}

	return result;
}

double exponentielle(int x){
	double exp = 1.0;
 
    for (int i = 1; i < 11; i++) {
        exp = exp + (puissance(x,i)/factorielle(i));
    }
 
    return exp;
}

void createPoisson(int n, double p){
	struct Coordonnees point;
	point.x = malloc(n * sizeof(int));
	point.y = malloc(n * sizeof(double));

	double lambda = n*p;

	for(int k=0; k<=n; k++)
	{
		point.x[k] = k;
		point.y[k] = (exponentielle(-lambda)*puissance(lambda, k))/factorielle(k);
		printf("x: %d y: %f\n", point.x[k], point.y[k]);
	}

	free(point.x);
	free(point.y);
}


void createBinomiale(int n, double p)
{
	struct Coordonnees point;
	point.x = malloc(n * sizeof(int));
	point.y = malloc(n * sizeof(double));

	for(int k=0; k<=n; k++)
	{
		point.x[k] = k;
		point.y[k] = (factorielle(n)/(factorielle(k)*factorielle(n-k)))*puissance(p, k)*puissance(1-p,n-k);
		printf("x: %d y: %f\n", point.x[k], point.y[k]);
	}

	free(point.x);
	free(point.y);
}


int main(int argc, char *argv[]){

	if ( argc != 3) { printf(" Usage : %s n p \n", argv[0]); exit(-1); }

	int n = atoi(argv[1]);
	double p = atof(argv[2]);

	/*if ( p >= 0,1 ) { printf(" Usage : p <= 0,1 \n"); exit(-1);}
	if ( n*p >= 15 ) { printf(" Usage : np <= 15 \n"); exit(-1);}
	if ( n <= 30 ) { printf(" Usage : n >= 30 \n"); exit(-1);}*/

	createBinomiale(n, p);
	createPoisson(n, p);
}