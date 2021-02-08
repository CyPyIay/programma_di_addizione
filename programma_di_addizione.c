//programma di addizione
#include <stdio.h> //libreria standard input output

int main() //funzione main
	{
		int integer1, integer2, sum; //dichiarazione variabili
		printf("programma di addizione\n"); //titolo programma
		printf("**************************\n"); //spazio
		printf("inserire primo numero intero\n"); //chiede il primo numero
		scanf("%d", &integer1); //mette il numero dato nella variabile integer1
		printf("**************************\n"); //spazio
		printf("inserire secondo numero intero\n"); //chiede il secondo numero
		scanf("%d", &integer2); //mette il numero dato nella variabile integer2
		sum = integer1 + integer2; //formula di addizione
		printf("la somma è %d\n", sum); //stampa a schermo il risultato
		printf("**************************\n"); //spazio
		return 0; //fine programma
	}
