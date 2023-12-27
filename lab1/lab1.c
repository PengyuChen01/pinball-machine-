/* 
    Author:Pengyu Chen
*/

#include <stdio.h>
#include "include.h"
#include "lab1.h"
double foo(double x)
{
    return 2.0*x;
}

int multipleByTwo(int x)
{
    return 2*x;
}

int main()
{
    int i = INIT,j;

    printf("Before, i = %d\n", i);
    j = multipleByTwo(i);
    printf("After, i = %d\n", i);
    /* Rreturning 0 to the system signifies no erros */
    return 0;
}