/*
 * prime.c
 *
 *  Created on: Sep 3, 2015
 *      Author: root
 */


/* C program to check either prime number or Armstrong number depending upon the data entered by user. */
#include <stdio.h>
int prime(int n);
int armstrong(int n);
int main17()
{
    char c;
    int n,temp=0;
    printf("Eneter a positive integer: ");
    scanf("%d",&n);
    printf("Enter P to check prime and  A to check Armstrong number: ");
    scanf(" %c", &c);
    if (c=='p' || c=='P')
    {
        temp=prime(n);
        if(temp==1)
           printf("\n%d is a prime number.", n);
        else
           printf("\n%d is not a prime number.", n);
    }
    if (c=='a' || c=='A')
    {
        temp=armstrong(n);
        if(temp==1)
           printf("\n%d is an Armstrong number.", n);
        else
           printf("\n%d is not an Armstrong number.",n);
    }
    return 0;
}
int prime(int n)
{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
    {
       if(n%i==0)
       {
          flag=0;
          break;
       }
    }
    return flag;
}
int armstrong(int n)
{
    int num=0, temp, flag=0;
    temp=n;
    while(n!=0)
    {
        num+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if (num==temp)
       flag=1;
    return flag;
}
