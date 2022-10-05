from math import log10
from math import floor


def is_number_palindrome(number):
    if(number/10 == 0):
        return True
    number_of_digits=int(log10(number))+1
    while(number):
        lmd = int(number / pow(10,number_of_digits-1))
        rmd = number % 10
        if(lmd != rmd):
            return False
        number = number-pow(10,number_of_digits-1)*lmd
        number = int(number/10)
        number_of_digits-=2    
    return True

