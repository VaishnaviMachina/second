#include<iostream>
#include"functions.h"
int factorial(int n)
{
	int fact = 1, i;
   for(i=1; i<=n; i++)
      fact = fact * i;
   return fact;


}
