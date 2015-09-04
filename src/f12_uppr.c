// ---------------------------------------------------------------------
//  Figure 12.12:  A char* parameter.
// ---------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

void print_upper( char* s );

int main2( void )
{
    char first[15];
    char* name = first;
    char street[30],  city[30], state[3];

    printf( " Enter first name: " );
    scanf( "%14s", name );                  // Read one word only
    printf( " Enter street address: " );
    scanf( " %29[^\n]", street );           // Read to end of line
    printf( " Enter city, state: " );       // Split line at comma
    scanf( " %29[^,], %2[^\n]", city, state );

    putchar( '\n' );
    print_upper( name );                    // Print name in all capitals.
    printf( "\n %s %s, ", street, city  );  // Print street, city as entered.
    print_upper( state );                   // Print state in all capitals.
    puts( "\n" );
    return 0;
}

// ----------------------------------------------------------------------
void print_upper( char* s )
{
	int k;
    for (k = 0; s[k] != '\0'; ++k ) putchar( toupper( s[k] ) );
}

/* Output: --------------------------------------------------------------

 Enter first name: Janet
 Enter street address: 371 Elm St.
 Enter city, state: Hartford, Ct.

JANET
 371 Elm St. Hartford, CT
---------------------------------------------------------------------- */
