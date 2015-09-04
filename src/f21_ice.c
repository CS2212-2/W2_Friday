// ---------------------------------------------------------------------
//  Figure 12.21: Selecting ice cream from a menu.
//  Figure 12.22: A menu-handling function.
// ---------------------------------------------------------------------
#include <stdio.h>

#define CHOICES  6
int menu ( char* title, int max, char* menu_list[] );

int main3( void )
{
    int choice;                                      // The menu selection
    char* greeting = "\n I'm happy to serve you.  Our specials today are: ";
    char* flavor[CHOICES] = { "Empty", "Vanilla", "Pistachio",
                               "Rocky Road", "Fudge Chip", "Lemon" };
    float price[CHOICES] = { 0.00, 1.00, 1.50, 1.35, 1.25, 1.20 };

    choice = menu( greeting, CHOICES, flavor );
    printf( "\n Here is your %s cone.  That will be $%.2f. \n",
            flavor[choice], price[choice] );
    puts( " Thank you, come again. \n" );
}

// ----------------------------------------------------------------------
// Display a menu then read and validate a numeric menu choice.
int
menu ( char* title, int max, char* menu_list[] )
{
    int choice;                 // To store the menu selection.
    printf( "\n %s\n", title );
    int n;
    for (n=0; n < max; ++n)  printf( "\t %i. %s \n", n, menu_list[n] );

    printf( " Please enter your selection: ");
    for(;;) {                  // Prompt for and validate a menu selection.
        scanf( "%i", &choice );
        if (choice >= 0 && choice < max) break;     // Accept valid choice.
        printf( " Please enter number between 0 and %i: ", max-1 );
    }
    return choice;
}

/* Output: --------------------------------------------------------------

 I'm happy to serve you.  Our specials today are:
         0. Empty
         1. Vanilla
         2. Pistachio
         3. Rocky Road
         4. Fudge Chip
         5. Lemon
 Please enter your selection: 3

 Here is your Rocky Road cone.  That will be $1.35.
 Thank you, come again.

--------------------------------------------------
 I'm happy to serve you.  Our specials today are:
         0. Empty
         1. Vanilla
         2. Pistachio
         3. Rocky Road
         4. Fudge Chip
         5. Lemon
 Please enter your selection: -3
 Please enter number between 0 and 5: 6
 Please enter number between 0 and 5: 5

 Here is your Lemon cone.  That will be $1.20.
 Thank you, come again.

---------------------------------------------------------------------- */
