/*
 * array2.c
 *
 *  Created on: Sep 3, 2015
 *      Author: root
 */


#include <stdio.h>
void display(int a)
   {
   printf("%d",a);
   }
int main14(){
   int c[]={2,3,4};
   display(c[2]);  //Passing array element c[2] only.
   return 0;
}
