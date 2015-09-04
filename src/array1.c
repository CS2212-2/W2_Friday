/*
 * array1.c
 *
 *  Created on: Sep 3, 2015
 *      Author: root
 */


#include <stdio.h>
disp( int *num)
{
    printf("%d ", *num);
}

int main13()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
     int i;
     for (i=0; i<=10; i++)
     {
         /* I’m passing element’s address*/
         disp (&arr[i]);
     }

     return 0;
}
