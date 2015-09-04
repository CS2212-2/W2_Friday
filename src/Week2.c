/*
 ============================================================================
 Name        : Week2.c
 Author      : Izzat Alsmadi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define N 24
int main1(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

double temperature[N];
int k;

method2();

// To atore the input data
// loop counter
//string temp = temperature;
puts( "Storing hourly temperatures for yesterday." );
puts( "Enter 24 temps, starting with time 0:00" );
for( k=0; k<N; k++){
scanf ("%lg", &temperature[k] );
printf("k is...%d/n", k);
printf("temperatures.... %0.1f", temperature[k]);
}

//	return EXIT_SUCCESS;
}

void method2(){

	char* fname = "Alice";   // Point at string literal.
	char letters[20] = "Waltz";
	char* lname = letters;  // Point at letters[0].
	char* fun = &fname[2]; // Point at fname[2].
	char* fun1 = &fname[1];
	char* fun3 = "alice";
	printf("compare is...%d /n", strcmp(fname,fun3));
	printf("/n My name was %s %c. %s\n", fname, 'E', lname);
	lname = "Fischer";
	printf("Now my name is %s %c. %s ", fname,'E',lname);
	printf("\nI like to skate on %s.\n", fun);
}

