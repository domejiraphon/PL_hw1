#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>

double mod(double n1, double n2){ return int(n1) % int(n2);}
double factorial(double n){return (n==0) || (n==1) ? 1 : n* factorial(n-1);}
int main ()
{
  double z;
  z = factorial(5.00);
  std::cout << "The result is " << z << std::endl;
 
}