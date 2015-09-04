/*
 * array6.c
 *
 *  Created on: Sep 3, 2015
 *      Author: root
 */


#include <stdio.h>
myfuncn( int *var1, int var2)
{ int x;
    for(x=0; x<var2; x++)
    {
        printf("Value of var_arr[%d] is: %d \n", x, *var1);
        /*increment pointer for next element fetch*/
        var1++;
    }
}

int main19()
{
     int var_arr[] = {11, 22, 33, 44, 55, 66, 77};
     myfuncn(&var_arr, 7);
     return 0;
}
