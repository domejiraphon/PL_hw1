#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>

double mod(double n1, double n2){ return int(n1) % int(n2);}
double factorial(double n){return (n==0) || (n==1) ? 1 : n* factorial(n-1);}
double usd_to_gbp(double amount, bool reverse=false) 
{
  double out, rate=0.80; //conversion rate of usd to gbp on June 5, 2022
  if (reverse) out = (1/rate) * amount; else out = amount * rate;
  return out;
}
int main ()
{
  double z;
  z =usd_to_gbp(5.00, true);
  std::cout << "The result is " << z << std::endl;
 
}