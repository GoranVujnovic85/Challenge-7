/*
 ============================================================================
 Name        : Challenge_21.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : zadatak 2:
               Implimentirati funkciju insert.
               Parameti funkcije: vrednost koja se dodaje, adresa niza, indeks na koji treba da se ubaci novi element
               Testirati u main.c
               Funkcija vraca OK (0) ako je ok, ERR (1) ako se dodaje na poziciju izvan velicine niza.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define OK  0
#define ERR 1

int insert(int value, int* array, int* size)
{
	if(*size >= MAXSIZE)
	{
		return ERR;
	}
	array[*size] = value;
	(*size)++;

	return OK;
}


int main(void)
{
	int size = 0;
	int array[MAXSIZE];

	insert(2, array, &size);
	insert(4, array, &size);
	insert(6, array, &size);

	printf("Arrey: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}
