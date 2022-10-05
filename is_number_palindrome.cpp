#include <cmath>
bool check_for_palindrome(int number)
{
   int num_digits=floor(log10(number))+1;
   int lmd;
   int rmd;
   while(number)
   {
    lmd=number/pow(10,num_digits-1);
    rmd=number%10;
    if(rmd!=lmd)
    return false;
    number=number-lmd*pow(10,num_digits-1);
    number/=10;
    num_digits-=2;

   }
   return true;

}