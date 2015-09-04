/*
 * 2DArray3.c
 *
 *  Created on: Sep 3, 2015
 *      Author: root
 */

#include <stdio.h>
int main()
{
   int abc[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            {16,17,18,19}
            };
   int i;
    for (i=0; i<=3; i++)
    {
        printf("%d ",abc[i]);
    }
    return 0;
}
