// ---------------------------------------------------------------------
// Figure 12.18:  Searching for a character or a substring.
// Figure 12.19:  Copy and concatenate.
// ---------------------------------------------------------------------
#include <stdio.h>
#include <string.h>     // For prototypes of the string functions.

#define N  5

int main5( void )
{
    char line[] = "I found the cat in the fort.";
    char * left, * right, * sub;

    left  = strchr( line, 'n' );    puts( left );
    right = strrchr( line, 'f' );   puts( right );
    sub = strstr( line, "the" );    puts( sub );

    strncpy( line, "Hotdog", 3 );
    strcpy( &line[3], " diggety" );
    strcat( line, " dog!" );
    puts( line );
}


/* Output: --------------------------------------------------------------
nd the cat in the fort.
fort.
the cat in the fort.
Hot diggety dog!
*/
